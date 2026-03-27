0x93BA20: push    ebp
0x93BA21: mov     ebp, esp
0x93BA23: and     esp, 0FFFFFFF0h
0x93BA26: sub     esp, 58h
0x93BA29: mov     eax, [ebp+arg_8]
0x93BA2C: mov     edx, [ebp+arg_C]
0x93BA2F: shl     eax, 3
0x93BA32: or      eax, edx
0x93BA34: add     eax, 0FFFFFFF7h; switch 17 cases
0x93BA37: cmp     eax, 10h
0x93BA3A: push    esi
0x93BA3B: push    edi
0x93BA3C: ja      def_93BA49; jumptable 0093BA49 default case, cases 12-16,19-24
0x93BA42: movzx   ecx, ds:byte_93C0A4[eax]
0x93BA49: jmp     ds:jpt_93BA49[ecx*4]; switch jump
0x93BA50: mov     edx, [ebp+arg_4]; jumptable 0093BA49 case 9
0x93BA53: movaps  xmm0, xmmword ptr [edx]
0x93BA56: mov     edx, [ebp+arg_0]
0x93BA59: movaps  xmm1, xmmword ptr [edx]
0x93BA5C: mov     ecx, [ebp+arg_18]
0x93BA5F: mov     eax, [ebp+arg_10]
0x93BA62: subps   xmm1, xmm0
0x93BA65: movaps  xmmword ptr [ecx], xmm1
0x93BA68: movaps  xmm2, xmmword ptr [eax]
0x93BA6B: movaps  xmm0, xmm2
0x93BA6E: mulps   xmm0, xmm1
0x93BA71: movaps  xmm3, xmm0
0x93BA74: shufps  xmm3, xmm0, 55h ; 'U'
0x93BA78: addss   xmm3, xmm0
0x93BA7C: movaps  xmm4, xmm0
0x93BA7F: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x93BA83: addss   xmm4, xmm3
0x93BA87: lea     eax, [esp+60h+var_58]
0x93BA8B: movss   dword ptr [eax], xmm4
0x93BA8F: fld     [esp+60h+var_58]
0x93BA93: fmul    dword ptr ds:0A342A4h
0x93BA99: movaps  xmm0, xmm1
0x93BA9C: mulps   xmm0, xmm1
0x93BA9F: movaps  xmm3, xmm0
0x93BAA2: lea     eax, [esp+60h+var_54]
0x93BAA6: shufps  xmm3, xmm0, 55h ; 'U'
0x93BAAA: movaps  xmm4, xmm0
0x93BAAD: addss   xmm3, xmm0
0x93BAB1: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x93BAB5: addss   xmm4, xmm3
0x93BAB9: movss   dword ptr [eax], xmm4
0x93BABD: fcomp   [esp+60h+var_54]
0x93BAC1: fnstsw  ax
0x93BAC3: test    ah, 5
0x93BAC6: lea     eax, [esp+60h+var_54]
0x93BACA: jp      short loc_93BB02
0x93BACC: mulps   xmm1, xmm2
0x93BACF: movaps  xmm0, xmm1
0x93BAD2: shufps  xmm0, xmm1, 55h ; 'U'
0x93BAD6: addss   xmm0, xmm1
0x93BADA: movaps  xmm3, xmm1
0x93BADD: shufps  xmm3, xmm1, 0AAh ; 'ª'
0x93BAE1: addss   xmm3, xmm0
0x93BAE5: movaps  xmmword ptr [ecx], xmm2
0x93BAE8: movss   dword ptr [eax], xmm3
0x93BAEC: fld     [esp+60h+var_54]
0x93BAF0: fstp    dword ptr [ecx+0Ch]
0x93BAF3: mov     ecx, [ebp+arg_14]
0x93BAF6: movaps  xmm0, xmmword ptr [edx]
0x93BAF9: movaps  xmmword ptr [ecx], xmm0
0x93BAFC: pop     edi
0x93BAFD: pop     esi
0x93BAFE: mov     esp, ebp
0x93BB00: pop     ebp
0x93BB01: retn
0x93BB02: movaps  xmm2, xmm0
0x93BB05: shufps  xmm2, xmm0, 55h ; 'U'
0x93BB09: addss   xmm2, xmm0
0x93BB0D: movaps  xmm3, xmm0
0x93BB10: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x93BB14: movaps  xmm0, xmm3
0x93BB17: addss   xmm0, xmm2
0x93BB1B: movaps  [esp+60h+var_50], xmm0
0x93BB20: rsqrtss xmm2, xmm0
0x93BB24: movss   dword ptr [esp+60h+var_50], xmm2
0x93BB2A: movaps  xmm2, [esp+60h+var_50]
0x93BB2F: movaps  xmm3, xmm0
0x93BB32: mulss   xmm3, xmm2
0x93BB36: mulss   xmm3, xmm2
0x93BB3A: mov     [esp+60h+var_54], 40400000h
0x93BB42: movss   xmm4, [esp+60h+var_54]
0x93BB48: subss   xmm4, xmm3
0x93BB4C: mov     [esp+60h+var_54], 3F000000h
0x93BB54: movss   xmm3, [esp+60h+var_54]
0x93BB5A: mulss   xmm3, xmm2
0x93BB5E: movaps  xmm2, xmm3
0x93BB61: mulss   xmm2, xmm4
0x93BB65: shufps  xmm2, xmm2, 0
0x93BB69: mulss   xmm0, xmm2
0x93BB6D: movss   dword ptr [eax], xmm0
0x93BB71: fld     [esp+60h+var_54]
0x93BB75: movaps  xmm3, xmm2
0x93BB78: mulps   xmm3, xmm1
0x93BB7B: movaps  xmmword ptr [ecx], xmm3
0x93BB7E: fstp    dword ptr [ecx+0Ch]
0x93BB81: mov     ecx, [ebp+arg_14]
0x93BB84: movaps  xmm0, xmmword ptr [edx]
0x93BB87: movaps  xmmword ptr [ecx], xmm0
0x93BB8A: pop     edi
0x93BB8B: pop     esi
0x93BB8C: mov     esp, ebp
0x93BB8E: pop     ebp
0x93BB8F: retn
0x93BB90: mov     eax, [ebp+arg_0]; jumptable 0093BA49 case 10
0x93BB93: movaps  xmm1, xmmword ptr [eax]
0x93BB96: mov     edx, [ebp+arg_4]
0x93BB99: movaps  xmm0, xmmword ptr [edx]
0x93BB9C: mov     ecx, [ebp+arg_10]
0x93BB9F: subps   xmm1, xmm0
0x93BBA2: movaps  xmm0, xmmword ptr [ecx]
0x93BBA5: mov     ecx, [ebp+arg_18]
0x93BBA8: movaps  xmmword ptr [ecx], xmm0
0x93BBAB: mulps   xmm0, xmm1
0x93BBAE: movaps  xmm1, xmm0
0x93BBB1: shufps  xmm1, xmm0, 55h ; 'U'
0x93BBB5: movaps  xmm2, xmm0
0x93BBB8: addss   xmm1, xmm0
0x93BBBC: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x93BBC0: lea     edx, [esp+60h+var_54]
0x93BBC4: addss   xmm2, xmm1
0x93BBC8: movss   dword ptr [edx], xmm2
0x93BBCC: mov     edx, [esp+60h+var_54]
0x93BBD0: mov     [ecx+0Ch], edx
0x93BBD3: movaps  xmm0, xmmword ptr [eax]
0x93BBD6: mov     eax, [ebp+arg_14]
0x93BBD9: movaps  xmmword ptr [eax], xmm0
0x93BBDC: pop     edi
0x93BBDD: pop     esi
0x93BBDE: mov     esp, ebp
0x93BBE0: pop     ebp
0x93BBE1: retn
0x93BBE2: mov     ecx, [ebp+arg_0]; jumptable 0093BA49 case 17
0x93BBE5: movaps  xmm0, xmmword ptr [ecx]
0x93BBE8: mov     ecx, [ebp+arg_4]
0x93BBEB: movaps  xmm1, xmmword ptr [ecx]
0x93BBEE: mov     edx, [ebp+arg_10]
0x93BBF1: mov     eax, [ebp+arg_18]
0x93BBF4: subps   xmm1, xmm0
0x93BBF7: movaps  xmm0, xmmword ptr [edx]
0x93BBFA: movaps  xmmword ptr [eax], xmm0
0x93BBFD: mulps   xmm0, xmm1
0x93BC00: movaps  xmm1, xmm0
0x93BC03: shufps  xmm1, xmm0, 55h ; 'U'
0x93BC07: movaps  xmm2, xmm0
0x93BC0A: addss   xmm1, xmm0
0x93BC0E: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x93BC12: movaps  xmm0, xmm2
0x93BC15: addss   xmm0, xmm1
0x93BC19: movaps  xmm1, xmmword ptr [ecx]
0x93BC1C: jmp     loc_93BE79
0x93BC21: mov     ecx, [ebp+arg_4]; jumptable 0093BA49 case 11
0x93BC24: movaps  xmm2, xmmword ptr [ecx+20h]
0x93BC28: movaps  xmm1, xmmword ptr [ecx+10h]
0x93BC2C: movaps  xmm0, xmm2
0x93BC2F: subps   xmm0, xmm1
0x93BC32: movaps  xmm1, xmmword ptr [ecx]
0x93BC35: subps   xmm1, xmm2
0x93BC38: movaps  xmm3, xmm0
0x93BC3B: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x93BC3F: mov     eax, [ebp+arg_18]
0x93BC42: mov     edx, [ebp+arg_10]
0x93BC45: movaps  xmm2, xmm1
0x93BC48: shufps  xmm2, xmm1, 0C9h ; 'É'
0x93BC4C: mulps   xmm3, xmm2
0x93BC4F: movaps  xmm2, xmm1
0x93BC52: shufps  xmm2, xmm1, 0D2h ; 'Ò'
0x93BC56: movaps  xmm1, xmm0
0x93BC59: shufps  xmm1, xmm0, 0C9h ; 'É'
0x93BC5D: mulps   xmm1, xmm2
0x93BC60: subps   xmm1, xmm3
0x93BC63: movaps  xmm0, xmm1
0x93BC66: mulps   xmm0, xmm1
0x93BC69: movaps  xmm2, xmm0
0x93BC6C: shufps  xmm2, xmm0, 55h ; 'U'
0x93BC70: addss   xmm2, xmm0
0x93BC74: movaps  xmm3, xmm0
0x93BC77: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x93BC7B: movaps  xmm0, xmm3
0x93BC7E: addss   xmm0, xmm2
0x93BC82: movaps  [esp+60h+var_50], xmm0
0x93BC87: rsqrtss xmm2, xmm0
0x93BC8B: movss   dword ptr [esp+60h+var_50], xmm2
0x93BC91: movaps  xmm2, [esp+60h+var_50]
0x93BC96: mulss   xmm0, xmm2
0x93BC9A: mulss   xmm0, xmm2
0x93BC9E: mov     [esp+60h+var_54], 40400000h
0x93BCA6: movss   xmm3, [esp+60h+var_54]
0x93BCAC: subss   xmm3, xmm0
0x93BCB0: mov     [esp+60h+var_54], 3F000000h
0x93BCB8: movss   xmm0, [esp+60h+var_54]
0x93BCBE: mulss   xmm0, xmm2
0x93BCC2: movaps  xmm2, xmm0
0x93BCC5: mulss   xmm2, xmm3
0x93BCC9: movaps  xmmword ptr [eax], xmm1
0x93BCCC: movaps  xmm3, xmmword ptr [edx]
0x93BCCF: movaps  xmm0, xmm1
0x93BCD2: mulps   xmm0, xmm3
0x93BCD5: movaps  xmm3, xmm0
0x93BCD8: shufps  xmm3, xmm0, 55h ; 'U'
0x93BCDC: movaps  xmm4, xmm0
0x93BCDF: addss   xmm3, xmm0
0x93BCE3: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x93BCE7: addss   xmm4, xmm3
0x93BCEB: movmskps edx, xmm4
0x93BCEE: test    dl, 1
0x93BCF1: jz      short loc_93BD00
0x93BCF3: movaps  xmm0, xmmword ptr ds:0A965C0h
0x93BCFA: xorps   xmm1, xmm0
0x93BCFD: movaps  xmmword ptr [eax], xmm1
0x93BD00: movaps  xmm0, xmmword ptr [eax]
0x93BD03: mov     edx, [ebp+arg_0]
0x93BD06: movaps  xmm1, xmm2
0x93BD09: shufps  xmm1, xmm2, 0
0x93BD0D: mulps   xmm1, xmm0
0x93BD10: movaps  xmmword ptr [eax], xmm1
0x93BD13: movaps  xmm0, xmmword ptr [ecx]
0x93BD16: movaps  xmm2, xmmword ptr [edx]
0x93BD19: mov     ecx, [ebp+arg_14]
0x93BD1C: movaps  xmm3, xmm2
0x93BD1F: subps   xmm3, xmm0
0x93BD22: movaps  xmm0, xmm3
0x93BD25: mulps   xmm0, xmm1
0x93BD28: movaps  xmm1, xmm0
0x93BD2B: shufps  xmm1, xmm0, 55h ; 'U'
0x93BD2F: movaps  xmm3, xmm0
0x93BD32: addss   xmm1, xmm0
0x93BD36: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x93BD3A: movaps  xmm0, xmm3
0x93BD3D: lea     edx, [esp+60h+var_54]
0x93BD41: addss   xmm0, xmm1
0x93BD45: movaps  xmmword ptr [ecx], xmm2
0x93BD48: movss   dword ptr [edx], xmm0
0x93BD4C: mov     ecx, [esp+60h+var_54]
0x93BD50: mov     [eax+0Ch], ecx
0x93BD53: pop     edi
0x93BD54: pop     esi
0x93BD55: mov     esp, ebp
0x93BD57: pop     ebp
0x93BD58: retn
0x93BD59: mov     ecx, [ebp+arg_0]; jumptable 0093BA49 case 25
0x93BD5C: movaps  xmm2, xmmword ptr [ecx+20h]
0x93BD60: movaps  xmm1, xmmword ptr [ecx+10h]
0x93BD64: movaps  xmm0, xmm2
0x93BD67: subps   xmm0, xmm1
0x93BD6A: movaps  xmm1, xmmword ptr [ecx]
0x93BD6D: subps   xmm1, xmm2
0x93BD70: movaps  xmm3, xmm0
0x93BD73: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x93BD77: mov     eax, [ebp+arg_18]
0x93BD7A: mov     edx, [ebp+arg_10]
0x93BD7D: movaps  xmm2, xmm1
0x93BD80: shufps  xmm2, xmm1, 0C9h ; 'É'
0x93BD84: mulps   xmm3, xmm2
0x93BD87: movaps  xmm2, xmm1
0x93BD8A: shufps  xmm2, xmm1, 0D2h ; 'Ò'
0x93BD8E: movaps  xmm1, xmm0
0x93BD91: shufps  xmm1, xmm0, 0C9h ; 'É'
0x93BD95: mulps   xmm1, xmm2
0x93BD98: subps   xmm1, xmm3
0x93BD9B: movaps  xmm0, xmm1
0x93BD9E: mulps   xmm0, xmm1
0x93BDA1: movaps  xmm2, xmm0
0x93BDA4: shufps  xmm2, xmm0, 55h ; 'U'
0x93BDA8: addss   xmm2, xmm0
0x93BDAC: movaps  xmm3, xmm0
0x93BDAF: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x93BDB3: movaps  xmm0, xmm3
0x93BDB6: addss   xmm0, xmm2
0x93BDBA: movaps  [esp+60h+var_50], xmm0
0x93BDBF: rsqrtss xmm2, xmm0
0x93BDC3: movss   dword ptr [esp+60h+var_50], xmm2
0x93BDC9: movaps  xmm2, [esp+60h+var_50]
0x93BDCE: mulss   xmm0, xmm2
0x93BDD2: mulss   xmm0, xmm2
0x93BDD6: mov     [esp+60h+var_54], 40400000h
0x93BDDE: movss   xmm3, [esp+60h+var_54]
0x93BDE4: subss   xmm3, xmm0
0x93BDE8: mov     [esp+60h+var_54], 3F000000h
0x93BDF0: movss   xmm0, [esp+60h+var_54]
0x93BDF6: mulss   xmm0, xmm2
0x93BDFA: movaps  xmm2, xmm0
0x93BDFD: mulss   xmm2, xmm3
0x93BE01: movaps  xmmword ptr [eax], xmm1
0x93BE04: movaps  xmm3, xmmword ptr [edx]
0x93BE07: movaps  xmm0, xmm1
0x93BE0A: mulps   xmm0, xmm3
0x93BE0D: movaps  xmm3, xmm0
0x93BE10: shufps  xmm3, xmm0, 55h ; 'U'
0x93BE14: movaps  xmm4, xmm0
0x93BE17: addss   xmm3, xmm0
0x93BE1B: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x93BE1F: addss   xmm4, xmm3
0x93BE23: movmskps edx, xmm4
0x93BE26: test    dl, 1
0x93BE29: jz      short loc_93BE38
0x93BE2B: movaps  xmm0, xmmword ptr ds:0A965C0h
0x93BE32: xorps   xmm1, xmm0
0x93BE35: movaps  xmmword ptr [eax], xmm1
0x93BE38: movaps  xmm0, xmmword ptr [eax]
0x93BE3B: mov     edx, [ebp+arg_4]
0x93BE3E: movaps  xmm1, xmm2
0x93BE41: shufps  xmm1, xmm2, 0
0x93BE45: movaps  xmm2, xmm1
0x93BE48: mulps   xmm2, xmm0
0x93BE4B: movaps  xmmword ptr [eax], xmm2
0x93BE4E: movaps  xmm1, xmmword ptr [edx]
0x93BE51: movaps  xmm0, xmmword ptr [ecx]
0x93BE54: movaps  xmm3, xmm1
0x93BE57: subps   xmm3, xmm0
0x93BE5A: movaps  xmm0, xmm3
0x93BE5D: mulps   xmm0, xmm2
0x93BE60: movaps  xmm2, xmm0
0x93BE63: shufps  xmm2, xmm0, 55h ; 'U'
0x93BE67: movaps  xmm3, xmm0
0x93BE6A: addss   xmm2, xmm0
0x93BE6E: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x93BE72: movaps  xmm0, xmm3
0x93BE75: addss   xmm0, xmm2
0x93BE79: mov     ecx, [ebp+arg_14]
0x93BE7C: movaps  xmmword ptr [ecx], xmm1
0x93BE7F: movaps  xmm2, xmmword ptr [eax]
0x93BE82: movaps  xmm3, xmm0
0x93BE85: shufps  xmm3, xmm0, 0
0x93BE89: mulps   xmm3, xmm2
0x93BE8C: subps   xmm1, xmm3
0x93BE8F: movaps  xmmword ptr [ecx], xmm1
0x93BE92: lea     ecx, [esp+60h+var_54]
0x93BE96: movss   dword ptr [ecx], xmm0
0x93BE9A: fld     [esp+60h+var_54]
0x93BE9E: fchs
0x93BEA0: fstp    dword ptr [eax+0Ch]
0x93BEA3: pop     edi
0x93BEA4: pop     esi
0x93BEA5: mov     esp, ebp
0x93BEA7: pop     ebp
0x93BEA8: retn
0x93BEA9: mov     esi, [ebp+arg_0]; jumptable 0093BA49 case 18
0x93BEAC: mov     edi, [ebp+arg_4]
0x93BEAF: movaps  xmm0, xmmword ptr [esi]
0x93BEB2: movaps  xmm1, xmmword ptr [esi+10h]
0x93BEB6: lea     edx, [esp+60h+var_30]
0x93BEBA: push    edx
0x93BEBB: lea     eax, [esp+64h+var_50]
0x93BEBF: push    eax
0x93BEC0: subps   xmm1, xmm0
0x93BEC3: movaps  xmm0, xmmword ptr [edi]
0x93BEC6: push    edi
0x93BEC7: lea     ecx, [esp+6Ch+var_40]
0x93BECB: movaps  [esp+6Ch+var_40], xmm1
0x93BED0: movaps  xmm1, xmmword ptr [edi+10h]
0x93BED4: push    ecx
0x93BED5: subps   xmm1, xmm0
0x93BED8: push    esi
0x93BED9: movaps  [esp+74h+var_50], xmm1
0x93BEDE: call    sub_8D1A30
0x93BEE3: movaps  xmm0, [esp+74h+var_50]
0x93BEE8: movaps  xmm2, [esp+74h+var_40]
0x93BEED: movaps  xmm3, xmm2
0x93BEF0: shufps  xmm3, xmm2, 0D2h ; 'Ò'
0x93BEF4: movaps  xmm1, xmm0
0x93BEF7: shufps  xmm1, xmm0, 0C9h ; 'É'
0x93BEFB: mulps   xmm3, xmm1
0x93BEFE: movaps  xmm4, xmm2
0x93BF01: movaps  xmm1, xmm0
0x93BF04: shufps  xmm1, xmm0, 0D2h ; 'Ò'
0x93BF08: shufps  xmm4, xmm2, 0C9h ; 'É'
0x93BF0C: mulps   xmm4, xmm1
0x93BF0F: movaps  xmm1, xmm4
0x93BF12: subps   xmm1, xmm3
0x93BF15: movaps  xmm3, xmm0
0x93BF18: mulps   xmm3, xmm0
0x93BF1B: movaps  xmm0, xmm2
0x93BF1E: mulps   xmm0, xmm2
0x93BF21: addps   xmm0, xmm3
0x93BF24: mov     ecx, [ebp+arg_18]
0x93BF27: movaps  xmm2, xmm0
0x93BF2A: shufps  xmm2, xmm0, 55h ; 'U'
0x93BF2E: addss   xmm2, xmm0
0x93BF32: movaps  xmm3, xmm0
0x93BF35: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x93BF39: addss   xmm3, xmm2
0x93BF3D: lea     edx, [esp+74h+var_58]
0x93BF41: movss   dword ptr [edx], xmm3
0x93BF45: mov     edx, [ebp+arg_10]
0x93BF48: movaps  xmm0, xmm1
0x93BF4B: mulps   xmm0, xmm1
0x93BF4E: movaps  xmm2, xmm0
0x93BF51: shufps  xmm2, xmm0, 55h ; 'U'
0x93BF55: movaps  xmm3, xmm0
0x93BF58: lea     eax, [esp+74h+var_54]
0x93BF5C: addss   xmm2, xmm0
0x93BF60: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x93BF64: addss   xmm3, xmm2
0x93BF68: movss   dword ptr [eax], xmm3
0x93BF6C: fld     [esp+74h+var_54]
0x93BF70: fmul    dword ptr ds:0A37080h
0x93BF76: add     esp, 14h
0x93BF79: fld     [esp+60h+var_58]
0x93BF7D: movaps  xmmword ptr [ecx], xmm1
0x93BF80: fmul    [esp+60h+var_58]
0x93BF84: fcompp
0x93BF86: fnstsw  ax
0x93BF88: test    ah, 5
0x93BF8B: jp      loc_93C039
0x93BF91: movaps  xmm2, xmmword ptr [edx]
0x93BF94: movaps  xmm0, xmm1
0x93BF97: mulps   xmm0, xmm2
0x93BF9A: movaps  xmm2, xmm0
0x93BF9D: shufps  xmm2, xmm0, 55h ; 'U'
0x93BFA1: movaps  xmm3, xmm0
0x93BFA4: addss   xmm2, xmm0
0x93BFA8: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x93BFAC: addss   xmm3, xmm2
0x93BFB0: movmskps eax, xmm3
0x93BFB3: test    al, 1
0x93BFB5: jz      short loc_93BFC4
0x93BFB7: movaps  xmm0, xmmword ptr ds:0A965C0h
0x93BFBE: xorps   xmm1, xmm0
0x93BFC1: movaps  xmmword ptr [ecx], xmm1
0x93BFC4: movaps  xmm1, xmmword ptr [ecx]
0x93BFC7: movaps  xmm0, xmm1
0x93BFCA: mulps   xmm0, xmm1
0x93BFCD: movaps  xmm2, xmm0
0x93BFD0: shufps  xmm2, xmm0, 55h ; 'U'
0x93BFD4: addss   xmm2, xmm0
0x93BFD8: movaps  xmm3, xmm0
0x93BFDB: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x93BFDF: movaps  xmm0, xmm3
0x93BFE2: addss   xmm0, xmm2
0x93BFE6: movaps  [esp+60h+var_40], xmm0
0x93BFEB: rsqrtss xmm2, xmm0
0x93BFEF: movss   dword ptr [esp+60h+var_40], xmm2
0x93BFF5: movaps  xmm2, [esp+60h+var_40]
0x93BFFA: mulss   xmm0, xmm2
0x93BFFE: mulss   xmm0, xmm2
0x93C002: mov     [esp+60h+var_54], 40400000h
0x93C00A: movss   xmm3, [esp+60h+var_54]
0x93C010: subss   xmm3, xmm0
0x93C014: mov     [esp+60h+var_54], 3F000000h
0x93C01C: movss   xmm0, [esp+60h+var_54]
0x93C022: mulss   xmm0, xmm2
0x93C026: mulss   xmm0, xmm3
0x93C02A: movaps  xmm2, xmm0
0x93C02D: shufps  xmm2, xmm0, 0
0x93C031: mulps   xmm2, xmm1
0x93C034: movaps  xmmword ptr [ecx], xmm2
0x93C037: jmp     short loc_93C03F
0x93C039: movaps  xmm0, xmmword ptr [edx]
0x93C03C: movaps  xmmword ptr [ecx], xmm0
0x93C03F: movaps  xmm0, xmmword ptr [edi]
0x93C042: movaps  xmm2, xmmword ptr [esi]
0x93C045: movaps  xmm1, xmmword ptr [ecx]
0x93C048: mov     eax, [ebp+arg_14]
0x93C04B: subps   xmm2, xmm0
0x93C04E: movaps  xmm0, xmm2
0x93C051: mulps   xmm0, xmm1
0x93C054: movaps  xmm1, [esp+60h+var_30]
0x93C059: movaps  xmmword ptr [eax], xmm1
0x93C05C: movaps  xmm1, xmm0
0x93C05F: shufps  xmm1, xmm0, 55h ; 'U'
0x93C063: movaps  xmm2, xmm0
0x93C066: addss   xmm1, xmm0
0x93C06A: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x93C06E: lea     edx, [esp+60h+var_54]
0x93C072: addss   xmm2, xmm1
0x93C076: movss   dword ptr [edx], xmm2
0x93C07A: mov     eax, [esp+60h+var_54]
0x93C07E: mov     [ecx+0Ch], eax
0x93C081: pop     edi; jumptable 0093BA49 default case, cases 12-16,19-24
0x93C082: pop     esi
0x93C083: mov     esp, ebp
0x93C085: pop     ebp
0x93C086: retn
