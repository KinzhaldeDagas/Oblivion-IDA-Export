0x60D8B0: mov     eax, [esp+arg_0]
0x60D8B4: push    esi
0x60D8B5: push    eax
0x60D8B6: mov     esi, ecx
0x60D8B8: call    ??0bhkCharacterController@@QAE@XZ; bhkCharacterController::bhkCharacterController(void)
0x60D8BD: mov     ecx, [esp+4+arg_4]
0x60D8C1: mov     dword ptr [esi], offset ??_7bhkCharacterListenerArrow@@6BbhkCharacterListenerArrow@@@; const bhkCharacterListenerArrow::`vftable'{for `bhkCharacterListenerArrow'}
0x60D8C7: mov     dword ptr [esi+1E0h], offset ??_7bhkCharacterListenerArrow@@6BhkCharacterContext@@@; const bhkCharacterListenerArrow::`vftable'{for `hkCharacterContext'}
0x60D8D1: mov     dword ptr [esi+1F0h], offset ??_7bhkCharacterListenerArrow@@6BbhkCharacterListener@@@; const bhkCharacterListenerArrow::`vftable'{for `bhkCharacterListener'}
0x60D8DB: mov     [esi+3D0h], ecx
0x60D8E1: mov     eax, esi
0x60D8E3: pop     esi
0x60D8E4: retn    8
