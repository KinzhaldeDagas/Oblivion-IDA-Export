0x68F400: mov     eax, [esp+arg_0]
0x68F404: push    esi
0x68F405: push    eax
0x68F406: mov     esi, ecx
0x68F408: call    ??0bhkCharacterController@@QAE@XZ; bhkCharacterController::bhkCharacterController(void)
0x68F40D: mov     ecx, [esp+4+arg_4]
0x68F411: mov     dword ptr [esi], offset ??_7bhkCharacterListenerSpell@@6BbhkCharacterListenerSpell@@@; const bhkCharacterListenerSpell::`vftable'{for `bhkCharacterListenerSpell'}
0x68F417: mov     dword ptr [esi+1E0h], offset ??_7bhkCharacterListenerSpell@@6BhkCharacterContext@@@; const bhkCharacterListenerSpell::`vftable'{for `hkCharacterContext'}
0x68F421: mov     dword ptr [esi+1F0h], offset ??_7bhkCharacterListenerSpell@@6BbhkCharacterListener@@@; const bhkCharacterListenerSpell::`vftable'{for `bhkCharacterListener'}
0x68F42B: mov     [esi+3D0h], ecx
0x68F431: mov     eax, esi
0x68F433: pop     esi
0x68F434: retn    8
