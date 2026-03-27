0x8F61A0: mov     eax, ds:0BA81C8h
0x8F61A5: test    eax, eax
0x8F61A7: push    edi
0x8F61A8: mov     edi, ecx
0x8F61AA: mov     word ptr [edi+6], 1
0x8F61B0: mov     dword ptr [edi], offset off_A9B3DC
0x8F61B6: jnz     loc_8F6292
0x8F61BC: push    esi
0x8F61BD: push    offset aImagehlp_dll; "imagehlp.dll"
0x8F61C2: call    dword ptr ds:0A28118h
0x8F61C8: mov     esi, ds:0A2811Ch
0x8F61CE: push    offset aSyminitialize; "SymInitialize"
0x8F61D3: push    eax; hModule
0x8F61D4: mov     ds:0BA81C8h, eax
0x8F61D9: mov     dword ptr ds:0BA81C4h, 1
0x8F61E3: call    esi ; GetProcAddress
0x8F61E5: mov     ds:0BA81C0h, eax
0x8F61EA: mov     eax, ds:0BA81C8h
0x8F61EF: push    offset aSymgetoptions; "SymGetOptions"
0x8F61F4: push    eax; hModule
0x8F61F5: call    esi ; GetProcAddress
0x8F61F7: mov     ecx, ds:0BA81C8h
0x8F61FD: push    offset aSymsetoptions; "SymSetOptions"
0x8F6202: push    ecx; hModule
0x8F6203: mov     ds:0BA81BCh, eax
0x8F6208: call    esi ; GetProcAddress
0x8F620A: mov     edx, ds:0BA81C8h
0x8F6210: push    offset aSymgetsymfroma; "SymGetSymFromAddr"
0x8F6215: push    edx; hModule
0x8F6216: mov     ds:0BA81B8h, eax
0x8F621B: call    esi ; GetProcAddress
0x8F621D: mov     ds:0BA81B4h, eax
0x8F6222: mov     eax, ds:0BA81C8h
0x8F6227: push    offset aStackwalk; "StackWalk"
0x8F622C: push    eax; hModule
0x8F622D: call    esi ; GetProcAddress
0x8F622F: mov     ecx, ds:0BA81C8h
0x8F6235: push    offset aSymfunctiontab; "SymFunctionTableAccess"
0x8F623A: push    ecx; hModule
0x8F623B: mov     ds:0BA81B0h, eax
0x8F6240: call    esi ; GetProcAddress
0x8F6242: mov     edx, ds:0BA81C8h
0x8F6248: push    offset aSymgetmoduleba; "SymGetModuleBase"
0x8F624D: push    edx; hModule
0x8F624E: mov     ds:0BA81ACh, eax
0x8F6253: call    esi ; GetProcAddress
0x8F6255: mov     ds:0BA81A8h, eax
0x8F625A: mov     eax, ds:0BA81C8h
0x8F625F: push    offset aSymgetlinefrom; "SymGetLineFromAddr"
0x8F6264: push    eax; hModule
0x8F6265: call    esi ; GetProcAddress
0x8F6267: push    1; _DWORD
0x8F6269: push    0; _DWORD
0x8F626B: mov     ds:0BA81A4h, eax
0x8F6270: call    dword ptr ds:0A28104h
0x8F6276: push    eax; _DWORD
0x8F6277: call    dword ptr ds:0BA81C0h
0x8F627D: call    dword ptr ds:0BA81BCh
0x8F6283: or      eax, 10h
0x8F6286: push    eax; _DWORD
0x8F6287: call    dword ptr ds:0BA81B8h
0x8F628D: pop     esi
0x8F628E: mov     eax, edi
0x8F6290: pop     edi
0x8F6291: retn
0x8F6292: inc     dword ptr ds:0BA81C4h
0x8F6298: mov     eax, edi
0x8F629A: pop     edi
0x8F629B: retn
