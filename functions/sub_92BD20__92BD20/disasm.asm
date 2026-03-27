0x92BD20: push    ebp
0x92BD21: mov     ebp, esp
0x92BD23: and     esp, 0FFFFFFF0h
0x92BD26: sub     esp, 144h
0x92BD2C: push    ebx
0x92BD2D: mov     ebx, [ebp+arg_0]
0x92BD30: push    esi
0x92BD31: lea     esi, [esp+14Ch+var_104]
0x92BD35: mov     ecx, 80000020h
0x92BD3A: push    edi
0x92BD3B: mov     [esp+150h+var_110], esi
0x92BD3F: mov     [esp+150h+var_10C], 0
0x92BD47: mov     [esp+150h+var_108], ecx
0x92BD4B: jmp     short loc_92BD55
0x92BD4D: mov     ecx, [esp+150h+var_108]
0x92BD51: mov     esi, [esp+150h+var_110]
0x92BD55: or      eax, 0FFFFFFFFh
0x92BD58: mov     [esp+150h+var_134], eax
0x92BD5C: mov     [esp+150h+var_130], eax
0x92BD60: mov     eax, [ebx+4]
0x92BD63: xor     edx, edx
0x92BD65: cmp     eax, edx
0x92BD67: mov     [esp+150h+var_12C], 0FF7FFFFFh
0x92BD6F: jle     loc_92BFA4
0x92BD75: mov     [esp+150h+var_140], edx
0x92BD79: lea     esp, [esp+0]
0x92BD80: lea     ecx, [edx+1]
0x92BD83: cmp     ecx, eax
0x92BD85: mov     [esp+150h+var_128], ecx
0x92BD89: jge     loc_92BE4E
0x92BD8F: mov     eax, [esp+150h+var_140]
0x92BD93: add     eax, 10h
0x92BD96: mov     [esp+150h+var_13C], eax
0x92BD9A: lea     ebx, [ebx+0]
0x92BDA0: mov     eax, [ebx]
0x92BDA2: mov     edi, [esp+150h+var_13C]
0x92BDA6: movaps  xmm1, xmmword ptr [edi+eax]
0x92BDAA: mov     edi, [esp+150h+var_140]
0x92BDAE: movaps  xmm0, xmmword ptr [edi+eax]
0x92BDB2: mulps   xmm0, xmm1
0x92BDB5: movaps  xmm1, xmm0
0x92BDB8: shufps  xmm1, xmm0, 55h ; 'U'
0x92BDBC: movaps  xmm2, xmm0
0x92BDBF: lea     eax, [esp+150h+var_138]
0x92BDC3: addss   xmm1, xmm0
0x92BDC7: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x92BDCB: addss   xmm2, xmm1
0x92BDCF: movss   dword ptr [eax], xmm2
0x92BDD3: fld     [esp+150h+var_138]
0x92BDD7: fcomp   [esp+150h+var_12C]
0x92BDDB: fnstsw  ax
0x92BDDD: test    ah, 41h
0x92BDE0: jnz     short loc_92BE33
0x92BDE2: fld     [esp+150h+var_138]
0x92BDE6: fcomp   dword ptr ds:0A37450h
0x92BDEC: fnstsw  ax
0x92BDEE: test    ah, 5
0x92BDF1: jp      short loc_92BE33
0x92BDF3: mov     edi, [esp+150h+var_10C]
0x92BDF7: xor     eax, eax
0x92BDF9: test    edi, edi
0x92BDFB: jle     short loc_92BE17
0x92BDFD: lea     ecx, [ecx+0]
0x92BE00: cmp     [esi+eax*8], edx
0x92BE03: jnz     short loc_92BE0B
0x92BE05: cmp     [esi+eax*8+4], ecx
0x92BE09: jz      short loc_92BE12
0x92BE0B: inc     eax
0x92BE0C: cmp     eax, edi
0x92BE0E: jl      short loc_92BE00
0x92BE10: jmp     short loc_92BE17
0x92BE12: cmp     eax, 0FFFFFFFFh
0x92BE15: jnz     short loc_92BE37
0x92BE17: mov     eax, [esp+150h+var_138]
0x92BE1B: mov     [esp+150h+var_12C], eax
0x92BE1F: mov     eax, [ebp+arg_4]
0x92BE22: mov     [eax], edx
0x92BE24: mov     eax, [ebp+arg_8]
0x92BE27: mov     [eax], ecx
0x92BE29: mov     [esp+150h+var_134], edx
0x92BE2D: mov     [esp+150h+var_130], ecx
0x92BE31: jmp     short loc_92BE37
0x92BE33: mov     edi, [esp+150h+var_10C]
0x92BE37: add     [esp+150h+var_13C], 10h
0x92BE3C: mov     eax, [ebx+4]
0x92BE3F: inc     ecx
0x92BE40: cmp     ecx, eax
0x92BE42: jl      loc_92BDA0
0x92BE48: mov     ecx, [esp+150h+var_128]
0x92BE4C: jmp     short loc_92BE52
0x92BE4E: mov     edi, [esp+150h+var_10C]
0x92BE52: add     [esp+150h+var_140], 10h
0x92BE57: mov     eax, [ebx+4]
0x92BE5A: mov     edx, ecx
0x92BE5C: cmp     edx, eax
0x92BE5E: jl      loc_92BD80
0x92BE64: cmp     [esp+150h+var_134], 0FFFFFFFFh
0x92BE69: jz      loc_92BFA0
0x92BE6F: mov     eax, [esp+150h+var_108]
0x92BE73: and     eax, 3FFFFFFFh
0x92BE78: cmp     edi, eax
0x92BE7A: jnz     short loc_92BE93
0x92BE7C: lea     ecx, [esp+150h+var_110]
0x92BE80: push    8
0x92BE82: push    ecx
0x92BE83: call    sub_8A6EE0
0x92BE88: mov     edi, [esp+158h+var_10C]
0x92BE8C: mov     esi, [esp+158h+var_110]
0x92BE90: add     esp, 8
0x92BE93: mov     edx, [esp+150h+var_134]
0x92BE97: mov     [esi+edi*8], edx
0x92BE9A: mov     eax, [esp+150h+var_10C]
0x92BE9E: mov     ecx, [esp+150h+var_110]
0x92BEA2: mov     edx, [esp+150h+var_130]
0x92BEA6: mov     [ecx+eax*8+4], edx
0x92BEAA: mov     edx, [esp+150h+var_10C]
0x92BEAE: mov     eax, [ebp+arg_8]
0x92BEB1: mov     ecx, [ebp+arg_4]
0x92BEB4: mov     edi, [ecx]
0x92BEB6: mov     esi, [ebx]
0x92BEB8: inc     edx
0x92BEB9: mov     [esp+150h+var_10C], edx
0x92BEBD: mov     edx, [eax]
0x92BEBF: mov     eax, edx
0x92BEC1: shl     eax, 4
0x92BEC4: movaps  xmm0, xmmword ptr [eax+esi]
0x92BEC8: add     eax, esi
0x92BECA: mov     eax, [ebp+arg_C]
0x92BECD: mov     ecx, edi
0x92BECF: shl     ecx, 4
0x92BED2: movaps  xmm1, xmmword ptr [ecx+esi]
0x92BED6: add     ecx, esi
0x92BED8: mov     esi, [ebp+arg_10]
0x92BEDB: push    eax
0x92BEDC: movaps  xmm2, xmm0
0x92BEDF: shufps  xmm2, xmm0, 0C9h ; 'É'
0x92BEE3: push    esi
0x92BEE4: movaps  xmm3, xmm1
0x92BEE7: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x92BEEB: mulps   xmm3, xmm2
0x92BEEE: movaps  xmm2, xmm0
0x92BEF1: push    edx
0x92BEF2: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x92BEF6: movaps  xmm0, xmm1
0x92BEF9: push    edi
0x92BEFA: shufps  xmm0, xmm1, 0C9h ; 'É'
0x92BEFE: movaps  xmm6, xmm0
0x92BF01: lea     ecx, [esp+160h+var_120]
0x92BF05: mulps   xmm6, xmm2
0x92BF08: push    ebx
0x92BF09: subps   xmm6, xmm3
0x92BF0C: push    ecx
0x92BF0D: movaps  [esp+168h+var_120], xmm6
0x92BF12: call    sub_92B900
0x92BF17: add     esp, 18h
0x92BF1A: cmp     eax, 1
0x92BF1D: jz      loc_92BFDC
0x92BF23: mov     edx, [ebp+arg_C]
0x92BF26: movaps  xmm0, xmmword ptr [edx]
0x92BF29: movaps  xmm1, xmmword ptr [esi]
0x92BF2C: subps   xmm1, xmm0
0x92BF2F: mulps   xmm6, xmm1
0x92BF32: movaps  xmm0, xmm6
0x92BF35: shufps  xmm0, xmm6, 55h ; 'U'
0x92BF39: movaps  xmm1, xmm6
0x92BF3C: lea     eax, [esp+150h+var_124]
0x92BF40: addss   xmm0, xmm6
0x92BF44: shufps  xmm1, xmm6, 0AAh ; 'ª'
0x92BF48: addss   xmm1, xmm0
0x92BF4C: movss   dword ptr [eax], xmm1
0x92BF50: fld     [esp+150h+var_124]
0x92BF54: fcomp   dword ptr ds:0A97BD8h
0x92BF5A: fnstsw  ax
0x92BF5C: test    ah, 41h
0x92BF5F: jnz     loc_92BD4D
0x92BF65: mov     eax, [esp+150h+var_108]
0x92BF69: test    eax, eax
0x92BF6B: js      short loc_92BF97
0x92BF6D: mov     edx, [esp+150h+var_110]
0x92BF71: mov     ecx, large fs:2Ch
0x92BF78: and     eax, 3FFFFFFFh
0x92BF7D: push    14h
0x92BF7F: shl     eax, 3
0x92BF82: push    eax
0x92BF83: mov     eax, ds:0BA9DE4h
0x92BF88: push    edx
0x92BF89: mov     edx, [ecx+eax*4]
0x92BF8C: mov     ecx, [edx+19Ch]
0x92BF92: call    sub_8A75D0
0x92BF97: xor     eax, eax
0x92BF99: pop     edi
0x92BF9A: pop     esi
0x92BF9B: pop     ebx
0x92BF9C: mov     esp, ebp
0x92BF9E: pop     ebp
0x92BF9F: retn
0x92BFA0: mov     ecx, [esp+150h+var_108]
0x92BFA4: test    ecx, ecx
0x92BFA6: js      short loc_92BFD0
0x92BFA8: mov     edx, large fs:2Ch
0x92BFAF: and     ecx, 3FFFFFFFh
0x92BFB5: shl     ecx, 3
0x92BFB8: push    14h
0x92BFBA: push    ecx
0x92BFBB: mov     ecx, ds:0BA9DE4h
0x92BFC1: mov     eax, [edx+ecx*4]
0x92BFC4: mov     ecx, [eax+19Ch]
0x92BFCA: push    esi
0x92BFCB: call    sub_8A75D0
0x92BFD0: mov     eax, 1
0x92BFD5: pop     edi
0x92BFD6: pop     esi
0x92BFD7: pop     ebx
0x92BFD8: mov     esp, ebp
0x92BFDA: pop     ebp
0x92BFDB: retn
0x92BFDC: mov     eax, [esp+150h+var_108]
0x92BFE0: test    eax, eax
0x92BFE2: js      short loc_92C00E
0x92BFE4: mov     ecx, [esp+150h+var_110]
0x92BFE8: mov     edx, ds:0BA9DE4h
0x92BFEE: and     eax, 3FFFFFFFh
0x92BFF3: push    14h
0x92BFF5: shl     eax, 3
0x92BFF8: push    eax
0x92BFF9: mov     eax, large fs:2Ch
0x92BFFF: push    ecx
0x92C000: mov     ecx, [eax+edx*4]
0x92C003: mov     ecx, [ecx+19Ch]
0x92C009: call    sub_8A75D0
0x92C00E: pop     edi
0x92C00F: pop     esi
0x92C010: mov     eax, 1
0x92C015: pop     ebx
0x92C016: mov     esp, ebp
0x92C018: pop     ebp
0x92C019: retn
