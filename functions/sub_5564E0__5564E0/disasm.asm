0x5564E0: sub     esp, 8
0x5564E3: mov     [esp+8+var_4], ecx
0x5564E7: mov     ecx, [ecx+8]
0x5564EA: xor     eax, eax
0x5564EC: test    ecx, ecx
0x5564EE: jz      loc_5565EC
0x5564F4: push    esi
0x5564F5: mov     esi, [ecx+8]
0x5564F8: test    esi, esi
0x5564FA: jz      loc_5565EB
0x556500: push    ebx
0x556501: push    ebp
0x556502: push    edi
0x556503: mov     [esp+18h+var_8], 24h ; '$'
0x55650B: xor     edi, edi
0x55650D: lea     ecx, [ecx+0]
0x556510: mov     eax, [edi+esi+8]
0x556514: test    eax, eax
0x556516: jz      short loc_55652F
0x556518: mov     esi, [edi+esi+0Ch]
0x55651C: sub     esi, eax
0x55651E: mov     eax, 66666667h
0x556523: imul    esi
0x556525: sar     edx, 3
0x556528: mov     eax, edx
0x55652A: shr     eax, 1Fh
0x55652D: add     eax, edx
0x55652F: shl     eax, 4
0x556532: add     [esp+18h+var_8], eax
0x556536: xor     ebx, ebx
0x556538: xor     ebp, ebp
0x55653A: lea     ebx, [ebx+0]
0x556540: mov     eax, [esp+18h+var_4]
0x556544: mov     ecx, [eax+8]
0x556547: mov     esi, [ecx+8]
0x55654A: mov     eax, [edi+esi+8]
0x55654E: test    eax, eax
0x556550: jz      loc_5565D8
0x556556: mov     ecx, [edi+esi+0Ch]
0x55655A: sub     ecx, eax
0x55655C: mov     eax, 66666667h
0x556561: imul    ecx
0x556563: sar     edx, 3
0x556566: mov     eax, edx
0x556568: shr     eax, 1Fh
0x55656B: add     eax, edx
0x55656D: cmp     ebx, eax
0x55656F: jnb     short loc_5565D8
0x556571: mov     eax, [edi+esi+8]
0x556575: test    eax, eax
0x556577: jz      short loc_556594
0x556579: mov     ecx, [edi+esi+0Ch]
0x55657D: sub     ecx, eax
0x55657F: mov     eax, 66666667h
0x556584: imul    ecx
0x556586: sar     edx, 3
0x556589: mov     eax, edx
0x55658B: shr     eax, 1Fh
0x55658E: add     eax, edx
0x556590: cmp     ebx, eax
0x556592: jb      short loc_556599
0x556594: call    __invalid_parameter_noinfo
0x556599: mov     edx, [edi+esi+8]
0x55659D: lea     eax, [edx+ebp+4]
0x5565A1: mov     edx, [eax+4]
0x5565A4: test    edx, edx
0x5565A6: jnz     short loc_5565AC
0x5565A8: xor     eax, eax
0x5565AA: jmp     short loc_5565BF
0x5565AC: mov     ecx, [eax+8]
0x5565AF: sub     ecx, edx
0x5565B1: mov     eax, 2AAAAAABh
0x5565B6: imul    ecx
0x5565B8: mov     eax, edx
0x5565BA: shr     eax, 1Fh
0x5565BD: add     eax, edx
0x5565BF: mov     ecx, [esp+18h+var_8]
0x5565C3: lea     eax, [eax+eax*2]
0x5565C6: lea     edx, [ecx+eax*2]
0x5565C9: add     ebx, 1
0x5565CC: mov     [esp+18h+var_8], edx
0x5565D0: add     ebp, 14h
0x5565D3: jmp     loc_556540
0x5565D8: add     edi, 10h
0x5565DB: cmp     edi, 20h ; ' '
0x5565DE: jb      loc_556510
0x5565E4: mov     eax, [esp+18h+var_8]
0x5565E8: pop     edi
0x5565E9: pop     ebp
0x5565EA: pop     ebx
0x5565EB: pop     esi
0x5565EC: add     esp, 8
0x5565EF: retn
