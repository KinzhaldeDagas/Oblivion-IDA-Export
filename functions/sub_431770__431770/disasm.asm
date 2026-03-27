0x431770: push    esi
0x431771: mov     esi, ecx
0x431773: push    edi
0x431774: movzx   edi, word ptr [esi+10h]
0x431778: test    edi, edi
0x43177A: mov     dword ptr [esi], offset ??_7FileFinder@@6B@; const FileFinder::`vftable'
0x431780: jz      short loc_4317D2
0x431782: mov     eax, [esi+8]
0x431785: mov     ecx, [eax+edi*4-4]
0x431789: sub     edi, 1
0x43178C: push    ecx
0x43178D: call    FormHeapFree
0x431792: movzx   eax, word ptr [esi+0Eh]
0x431796: movzx   edx, ax
0x431799: add     esp, 4
0x43179C: cmp     edi, edx
0x43179E: jnb     short loc_4317CE
0x4317A0: lea     ecx, [eax-1]
0x4317A3: mov     eax, [esi+8]
0x4317A6: mov     [esi+0Eh], cx
0x4317AA: mov     edx, [eax+edi*4]
0x4317AD: test    edx, edx
0x4317AF: movzx   ecx, cx
0x4317B2: mov     ecx, [eax+ecx*4]
0x4317B5: mov     [eax+edi*4], ecx
0x4317B8: movzx   eax, word ptr [esi+0Eh]
0x4317BC: mov     ecx, [esi+8]
0x4317BF: mov     dword ptr [ecx+eax*4], 0
0x4317C6: jz      short loc_4317CE
0x4317C8: add     word ptr [esi+10h], 0FFFFh
0x4317CE: test    edi, edi
0x4317D0: jnz     short loc_431782
0x4317D2: cmp     OBSE_g_FileFinder, esi
0x4317D8: jnz     short loc_4317E4
0x4317DA: mov     OBSE_g_FileFinder, 0
0x4317E4: mov     edx, [esi+8]
0x4317E7: push    edx
0x4317E8: mov     dword ptr [esi+4], offset ??_7?$NiTArray@PBD@@6B@; const NiTArray<char const *>::`vftable'
0x4317EF: call    FormHeapFree
0x4317F4: add     esp, 4
0x4317F7: pop     edi
0x4317F8: pop     esi
0x4317F9: retn
