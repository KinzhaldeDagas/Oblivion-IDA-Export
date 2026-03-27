0x739930: push    esi
0x739931: mov     esi, ecx
0x739933: mov     eax, [esi+4]
0x739936: test    eax, eax
0x739938: mov     dword ptr [esi], offset ??_7?$NiTArray@V?$NiPointer@VNiScreenPolygon@@@@@@6B@; const NiTArray<NiPointer<NiScreenPolygon>>::`vftable'
0x73993E: jz      short loc_73995F
0x739940: mov     ecx, [eax-4]
0x739943: push    edi
0x739944: lea     edi, [eax-4]
0x739947: push    offset sub_7016A0; void (__thiscall *)(void *)
0x73994C: push    ecx; int
0x73994D: push    4; unsigned int
0x73994F: push    eax; void *
0x739950: call    $LN21
0x739955: push    edi
0x739956: call    FormHeapFree
0x73995B: add     esp, 4
0x73995E: pop     edi
0x73995F: test    [esp+4+arg_0], 1
0x739964: jz      short loc_73996F
0x739966: push    esi
0x739967: call    FormHeapFree
0x73996C: add     esp, 4
0x73996F: mov     eax, esi
0x739971: pop     esi
0x739972: retn    4
