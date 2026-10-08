0x629750: mov     al, [esp+active]; Sets and returns HighProcess.dialogueActive. Dialogue producers set it when a DialogueItem is installed and clear it when the response finishes or is cancelled.
0x629754: mov     [ecx+228h], al
0x62975A: retn    4
