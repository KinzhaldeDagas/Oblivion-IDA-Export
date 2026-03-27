0x72C450: push    esi
0x72C451: mov     esi, ecx
0x72C453: mov     eax, [esi+4]
0x72C456: push    eax
0x72C457: mov     dword ptr [esi], offset ??_7Partition@NiSkinPartition@@6B@; const NiSkinPartition::Partition::`vftable'
0x72C45D: call    FormHeapFree
0x72C462: mov     ecx, [esi+8]
0x72C465: push    ecx
0x72C466: call    FormHeapFree
0x72C46B: mov     edx, [esi+0Ch]
0x72C46E: push    edx
0x72C46F: call    FormHeapFree
0x72C474: mov     eax, [esi+10h]
0x72C477: push    eax
0x72C478: call    FormHeapFree
0x72C47D: mov     ecx, [esi+14h]
0x72C480: push    ecx
0x72C481: call    FormHeapFree
0x72C486: mov     edx, [esi+18h]
0x72C489: push    edx
0x72C48A: call    FormHeapFree
0x72C48F: add     esp, 18h
0x72C492: pop     esi
0x72C493: retn
