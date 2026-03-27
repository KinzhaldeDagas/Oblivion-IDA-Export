0x9F0DB0: push    offset aEnterANameForY; "Enter a name for your custom class:"
0x9F0DB5: push    offset aSclassmenuprom; "sClassMenuPrompt"
0x9F0DBA: mov     ecx, offset dword_B38658
0x9F0DBF: call    GameSetting_ConstrAndReg
0x9F0DC4: push    offset sub_A213D0; void (__cdecl *)()
0x9F0DC9: call    _atexit
0x9F0DCE: pop     ecx
0x9F0DCF: retn
