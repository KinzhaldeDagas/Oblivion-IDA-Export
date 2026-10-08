0x625D70: mov     ecx, [ecx+48h]; Stops dialogue playback on activeSpeaker when a DialoguePackage is being torn down or replaced.
0x625D73: test    ecx, ecx
0x625D75: jz      short locret_625D7C
0x625D77: jmp     Actor__StopDialoguePlayback; Stops an Actor's current dialogue/audio/lip playback and associated animation state. Used before starting/replacing dialogue, on menu close, death/paralysis, and DialoguePackage active-speaker cleanup.
0x625D7C: retn
