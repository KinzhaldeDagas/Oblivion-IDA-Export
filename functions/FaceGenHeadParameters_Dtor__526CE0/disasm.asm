0x526CE0: push    0FFFFFFFFh
0x526CE2: push    offset FaceGenHeadParameters_Dtor_SEH
0x526CE7: mov     eax, large fs:0
0x526CED: push    eax
0x526CEE: push    ecx
0x526CEF: push    esi
0x526CF0: push    edi
0x526CF1: mov     eax, ds:0B30AACh
0x526CF6: xor     eax, esp
0x526CF8: push    eax
0x526CF9: lea     eax, [esp+1Ch+var_C]
0x526CFD: mov     large fs:0, eax
0x526D03: mov     esi, ecx
0x526D05: mov     [esp+1Ch+var_10], esi
0x526D09: mov     eax, [esi+0A8h]
0x526D0F: test    eax, eax
0x526D11: mov     [esp+1Ch+var_4], 3
0x526D19: mov     dword ptr [esi+0A4h], offset ??_7?$NiTArray@V?$NiPointer@VNiTexture@@@@@@6B@; const NiTArray<NiPointer<NiTexture>>::`vftable'
0x526D23: jz      short loc_526D42
0x526D25: mov     ecx, [eax-4]
0x526D28: lea     edi, [eax-4]
0x526D2B: push    offset sub_7016A0; void (__thiscall *)(void *)
0x526D30: push    ecx; int
0x526D31: push    4; unsigned int
0x526D33: push    eax; void *
0x526D34: call    $LN21
0x526D39: push    edi
0x526D3A: call    FormHeapFree
0x526D3F: add     esp, 4
0x526D42: mov     eax, [esi+98h]
0x526D48: push    eax
0x526D49: mov     dword ptr [esi+94h], offset ??_7?$NiTArray@PBD@@6B@; const NiTArray<char const *>::`vftable'
0x526D53: call    FormHeapFree
0x526D58: mov     eax, [esi+88h]
0x526D5E: push    eax
0x526D5F: mov     dword ptr [esi+84h], offset ??_7?$NiTArray@PAVTESTexture@@@@6B@; const NiTArray<TESTexture *>::`vftable'
0x526D69: call    FormHeapFree
0x526D6E: mov     eax, [esi+78h]
0x526D71: push    eax
0x526D72: mov     dword ptr [esi+74h], offset ??_7?$NiTArray@PAVTESModel@@@@6B@; const NiTArray<TESModel *>::`vftable'
0x526D79: call    FormHeapFree
0x526D7E: add     esp, 0Ch
0x526D81: push    offset sub_43ACE0; void (__thiscall *)(void *)
0x526D86: push    4; int
0x526D88: push    18h; unsigned int
0x526D8A: push    esi; void *
0x526D8B: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x526D93: call    $LN21
0x526D98: mov     ecx, [esp+1Ch+var_C]
0x526D9C: mov     large fs:0, ecx
0x526DA3: pop     ecx
0x526DA4: pop     edi
0x526DA5: pop     esi
0x526DA6: add     esp, 10h
0x526DA9: retn
