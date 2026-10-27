Option Explicit
Dim sh, choice
Set sh = CreateObject("WScript.Shell")
choice = InputBox("License testing demo" & vbCrLf & "1 - Run C++ crypto self-test" & vbCrLf & "2 - Open project folder" & vbCrLf & "0 - Exit", "License Test Lab")
If choice = "1" Then
  sh.Run Chr(34) & sh.CurrentDirectory & "\build\license-test.exe" & Chr(34), 1, True
ElseIf choice = "2" Then
  sh.Run "explorer.exe " & Chr(34) & sh.CurrentDirectory & Chr(34)
End If
