0x981B73: push    offset ModuleName
0x981B78: call    dword ptr ds:0A281A4h
0x981B7E: test    eax, eax
0x981B80: jz      short locret_981B98
0x981B82: push    offset aCorexitprocess
0x981B87: push    eax; hModule
0x981B88: call    dword ptr ds:0A2811Ch
0x981B8E: test    eax, eax
0x981B90: jz      short locret_981B98
0x981B92: push    [esp+arg_0]
0x981B96: call    eax
0x981B98: retn
