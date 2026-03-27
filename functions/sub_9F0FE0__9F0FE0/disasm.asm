0x9F0FE0: push    offset aSavingContent_; "Saving content. Please don't turn off y"...
0x9F0FE5: push    offset aSmenudisplayxb; "sMenuDisplayXBoxSaveMessage"
0x9F0FEA: mov     ecx, offset unk_B386E0
0x9F0FEF: call    GameSetting_ConstrAndReg
0x9F0FF4: push    offset sub_A214E0; void (__cdecl *)()
0x9F0FF9: call    _atexit
0x9F0FFE: pop     ecx
0x9F0FFF: retn
