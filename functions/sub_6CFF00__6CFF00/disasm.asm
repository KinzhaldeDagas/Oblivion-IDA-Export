0x6CFF00: push    0FFFFFFFFh
0x6CFF02: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x6CFF07: mov     eax, large fs:0
0x6CFF0D: push    eax
0x6CFF0E: push    ecx
0x6CFF0F: push    ebx
0x6CFF10: push    esi
0x6CFF11: push    edi
0x6CFF12: mov     eax, ds:0B30AACh
0x6CFF17: xor     eax, esp
0x6CFF19: push    eax
0x6CFF1A: lea     eax, [esp+20h+var_C]
0x6CFF1E: mov     large fs:0, eax
0x6CFF24: mov     esi, ecx
0x6CFF26: cmp     word ptr [esi+44h], 0
0x6CFF2B: jz      loc_6CFFF3
0x6CFF31: mov     ecx, [esi+3Ch]
0x6CFF34: test    ecx, ecx
0x6CFF36: jz      loc_6CFFF3
0x6CFF3C: cmp     dword ptr [ecx-4], 0
0x6CFF40: lea     eax, [ecx-4]
0x6CFF43: jz      short loc_6CFF4F
0x6CFF45: mov     eax, [ecx]
0x6CFF47: mov     edx, [eax]
0x6CFF49: push    3
0x6CFF4B: call    edx
0x6CFF4D: jmp     short loc_6CFF58
0x6CFF4F: push    eax
0x6CFF50: call    FormHeapFree
0x6CFF55: add     esp, 4
0x6CFF58: movzx   edi, word ptr [esi+44h]
0x6CFF5C: xor     ecx, ecx
0x6CFF5E: mov     eax, edi
0x6CFF60: mov     edx, 30h ; '0'
0x6CFF65: mul     edx
0x6CFF67: seto    cl
0x6CFF6A: neg     ecx
0x6CFF6C: or      ecx, eax
0x6CFF6E: xor     eax, eax
0x6CFF70: add     ecx, 4
0x6CFF73: setb    al
0x6CFF76: neg     eax
0x6CFF78: or      eax, ecx
0x6CFF7A: push    eax; Size
0x6CFF7B: call    FormHeapAlloc
0x6CFF80: add     esp, 4
0x6CFF83: mov     [esp+20h+var_10], eax
0x6CFF87: test    eax, eax
0x6CFF89: mov     [esp+20h+var_4], 0
0x6CFF91: jz      short loc_6CFFAD
0x6CFF93: push    offset j_??1NiBlendBoolInterpolator@@UAE@XZ; a5
0x6CFF98: push    offset sub_6CBCB0; a4
0x6CFF9D: push    edi; size
0x6CFF9E: lea     ebx, [eax+4]
0x6CFFA1: push    30h ; '0'; a2
0x6CFFA3: push    ebx; a1
0x6CFFA4: mov     [eax], edi
0x6CFFA6: call    ArrayConstructor
0x6CFFAB: jmp     short loc_6CFFAF
0x6CFFAD: xor     ebx, ebx
0x6CFFAF: xor     edi, edi
0x6CFFB1: cmp     [esi+44h], di
0x6CFFB5: mov     [esi+3Ch], ebx
0x6CFFB8: jbe     short loc_6CFFDC
0x6CFFBA: mov     ebx, ds:0A28078h
0x6CFFC0: mov     edx, [esi+3Ch]
0x6CFFC3: movzx   eax, di
0x6CFFC6: lea     ecx, [eax+eax*2]
0x6CFFC9: shl     ecx, 4
0x6CFFCC: lea     eax, [ecx+edx+4]
0x6CFFD0: push    eax; lpAddend
0x6CFFD1: call    ebx ; InterlockedIncrement
0x6CFFD3: add     edi, 1
0x6CFFD6: cmp     di, [esi+44h]
0x6CFFDA: jb      short loc_6CFFC0
0x6CFFDC: movzx   ecx, word ptr [esi+44h]
0x6CFFE0: mov     edx, [esi+40h]
0x6CFFE3: add     ecx, ecx
0x6CFFE5: add     ecx, ecx
0x6CFFE7: push    ecx
0x6CFFE8: push    0
0x6CFFEA: push    edx
0x6CFFEB: call    __memset
0x6CFFF0: add     esp, 0Ch
0x6CFFF3: mov     ecx, [esp+20h+var_C]
0x6CFFF7: mov     large fs:0, ecx
0x6CFFFE: pop     ecx
0x6CFFFF: pop     edi
0x6D0000: pop     esi
0x6D0001: pop     ebx
0x6D0002: add     esp, 10h
0x6D0005: retn
