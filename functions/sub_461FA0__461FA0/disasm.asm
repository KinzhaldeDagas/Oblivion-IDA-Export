0x461FA0: push    0FFFFFFFFh
0x461FA2: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x461FA7: mov     eax, large fs:0
0x461FAD: push    eax
0x461FAE: push    ecx
0x461FAF: push    ebp
0x461FB0: push    esi
0x461FB1: push    edi
0x461FB2: mov     eax, ds:0B30AACh
0x461FB7: xor     eax, esp
0x461FB9: push    eax
0x461FBA: lea     eax, [esp+20h+var_C]
0x461FBE: mov     large fs:0, eax
0x461FC4: mov     ebp, ecx
0x461FC6: mov     eax, [ebp+18h]
0x461FC9: shr     eax, 0Ch
0x461FCC: test    al, 1
0x461FCE: jz      loc_462067
0x461FD4: xor     edi, edi
0x461FD6: cmp     [ebp+0ACh], edi
0x461FDC: jnz     short loc_46203F
0x461FDE: push    18h; Size
0x461FE0: call    FormHeapAlloc
0x461FE5: mov     esi, eax
0x461FE7: add     esp, 4
0x461FEA: mov     [esp+20h+var_10], esi
0x461FEE: cmp     esi, edi
0x461FF0: mov     [esp+20h+var_4], edi
0x461FF4: jz      short loc_46202F
0x461FF6: xor     ecx, ecx
0x461FF8: mov     eax, 4E20h
0x461FFD: mov     [esi+8], eax
0x462000: mov     edx, 4
0x462005: mul     edx
0x462007: seto    cl
0x46200A: mov     dword ptr [esi], offset ??_7?$NiTLargeArray@PAVTESForm@@@@6B@; const NiTLargeArray<TESForm *>::`vftable'
0x462010: mov     dword ptr [esi+14h], 7D0h
0x462017: mov     [esi+0Ch], edi
0x46201A: mov     [esi+10h], edi
0x46201D: neg     ecx
0x46201F: or      ecx, eax
0x462021: push    ecx; Size
0x462022: call    FormHeapAlloc
0x462027: add     esp, 4
0x46202A: mov     [esi+4], eax
0x46202D: jmp     short loc_462031
0x46202F: xor     esi, esi
0x462031: mov     [esp+20h+var_4], 0FFFFFFFFh
0x462039: mov     [ebp+0ACh], esi
0x46203F: mov     esi, [ebp+0ACh]
0x462045: mov     edi, [esi+0Ch]
0x462048: cmp     edi, [esi+8]
0x46204B: jb      short loc_46205A
0x46204D: mov     eax, [esi+14h]
0x462050: add     eax, edi
0x462052: push    eax
0x462053: mov     ecx, esi
0x462055: call    sub_452910
0x46205A: lea     ecx, [esp+20h+arg_0]
0x46205E: push    ecx
0x46205F: push    edi
0x462060: mov     ecx, esi
0x462062: call    sub_446C50
0x462067: mov     ecx, [esp+20h+var_C]
0x46206B: mov     large fs:0, ecx
0x462072: pop     ecx
0x462073: pop     edi
0x462074: pop     esi
0x462075: pop     ebp
0x462076: add     esp, 10h
0x462079: retn    4
