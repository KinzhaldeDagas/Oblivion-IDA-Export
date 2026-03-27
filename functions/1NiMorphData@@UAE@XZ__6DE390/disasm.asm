0x6DE390: push    0FFFFFFFFh
0x6DE392: push    offset ??1NiScreenPolygon@@UAE@XZ_SEH
0x6DE397: mov     eax, large fs:0
0x6DE39D: push    eax
0x6DE39E: push    ecx
0x6DE39F: push    esi
0x6DE3A0: push    edi
0x6DE3A1: mov     eax, ds:0B30AACh
0x6DE3A6: xor     eax, esp
0x6DE3A8: push    eax
0x6DE3A9: lea     eax, [esp+1Ch+var_C]
0x6DE3AD: mov     large fs:0, eax
0x6DE3B3: mov     esi, ecx
0x6DE3B5: mov     [esp+1Ch+var_10], esi
0x6DE3B9: mov     dword ptr [esi], offset ??_7NiMorphData@@6B@; const NiMorphData::`vftable'
0x6DE3BF: mov     eax, [esi+10h]
0x6DE3C2: test    eax, eax
0x6DE3C4: mov     [esp+1Ch+var_4], 0
0x6DE3CC: jz      short loc_6DE3EB
0x6DE3CE: mov     ecx, [eax-4]
0x6DE3D1: lea     edi, [eax-4]
0x6DE3D4: push    offset sub_6DE0D0; void (__thiscall *)(void *)
0x6DE3D9: push    ecx; int
0x6DE3DA: push    0Ch; unsigned int
0x6DE3DC: push    eax; void *
0x6DE3DD: call    $LN21
0x6DE3E2: push    edi
0x6DE3E3: call    FormHeapFree
0x6DE3E8: add     esp, 4
0x6DE3EB: mov     ecx, esi
0x6DE3ED: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x6DE3F5: call    NiRefObject_destr
0x6DE3FA: mov     ecx, [esp+1Ch+var_C]
0x6DE3FE: mov     large fs:0, ecx
0x6DE405: pop     ecx
0x6DE406: pop     edi
0x6DE407: pop     esi
0x6DE408: add     esp, 10h
0x6DE40B: retn
