0x719F80: push    0FFFFFFFFh
0x719F82: push    offset ??1NiTriShapeDynamicData@@UAE@XZ_SEH
0x719F87: mov     eax, large fs:0
0x719F8D: push    eax
0x719F8E: push    ecx
0x719F8F: push    esi
0x719F90: push    edi
0x719F91: mov     eax, ds:0B30AACh
0x719F96: xor     eax, esp
0x719F98: push    eax
0x719F99: lea     eax, [esp+1Ch+var_C]
0x719F9D: mov     large fs:0, eax
0x719FA3: mov     esi, ecx
0x719FA5: mov     [esp+1Ch+var_10], esi
0x719FA9: mov     dword ptr [esi], offset ??_7NiTriStripsData@@6B@; const NiTriStripsData::`vftable'
0x719FAF: mov     [esp+1Ch+var_4], 0
0x719FB7: call    sub_728650
0x719FBC: test    eax, eax
0x719FBE: jz      short loc_71A000
0x719FC0: mov     ecx, esi
0x719FC2: call    sub_728650
0x719FC7: mov     edi, eax
0x719FC9: add     dword ptr [edi+0Ch], 0FFFFFFFFh
0x719FCD: jnz     short loc_719FDF
0x719FCF: mov     ecx, edi
0x719FD1: call    sub_732A20
0x719FD6: push    edi
0x719FD7: call    FormHeapFree
0x719FDC: add     esp, 4
0x719FDF: mov     ecx, esi
0x719FE1: call    sub_728650
0x719FE6: mov     edi, eax
0x719FE8: add     dword ptr [edi+0Ch], 0FFFFFFFFh
0x719FEC: jnz     short loc_71A015
0x719FEE: mov     ecx, edi
0x719FF0: call    sub_732A20
0x719FF5: push    edi
0x719FF6: call    FormHeapFree
0x719FFB: add     esp, 4
0x719FFE: jmp     short loc_71A015
0x71A000: mov     eax, [esi+48h]
0x71A003: push    eax
0x71A004: call    FormHeapFree
0x71A009: mov     eax, [esi+4Ch]
0x71A00C: push    eax
0x71A00D: call    FormHeapFree
0x71A012: add     esp, 8
0x71A015: mov     ecx, esi
0x71A017: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x71A01F: call    sub_732DF0
0x71A024: mov     ecx, [esp+1Ch+var_C]
0x71A028: mov     large fs:0, ecx
0x71A02F: pop     ecx
0x71A030: pop     edi
0x71A031: pop     esi
0x71A032: add     esp, 10h
0x71A035: retn
