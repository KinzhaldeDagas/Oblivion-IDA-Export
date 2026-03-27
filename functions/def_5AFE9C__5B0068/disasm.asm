0x5B0068: fld1; jumptable 005AFE9C default case
0x5B006A: fstp    [esp+arg_C]
0x5B006E: push    0; Seed
0x5B0070: fld     [esp+4+arg_C]
0x5B0074: fmul    qword ptr ds:0A2FC70h
0x5B007A: fstp    [esp+4+arg_8]
0x5B007E: fld     [esp+4+arg_8]
0x5B0082: fdiv    qword ptr ds:0A3F3F0h
0x5B0088: fstp    [esp+4+arg_10]
0x5B008C: call    GetRandomLargeInteger?
0x5B0091: mov     edx, ds:0B33EA0h
0x5B0097: push    edx; Seed
0x5B0098: mov     esi, eax
0x5B009A: call    GetRandomLargeInteger?
0x5B009F: push    esi; Seed
0x5B00A0: mov     ds:0B3B3FCh, eax
0x5B00A5: call    GetRandomLargeInteger?
0x5B00AA: mov     eax, ds:0B3B400h
0x5B00AF: lea     ecx, [eax+eax]
0x5B00B2: mov     [esp+0Ch+arg_8], ecx
0x5B00B6: fild    [esp+0Ch+arg_8]
0x5B00BA: xor     edx, edx
0x5B00BC: fld     [esp+0Ch+arg_10]
0x5B00C0: add     esp, 0Ch
0x5B00C3: fnstcw  word ptr [esp+arg_8]
0x5B00C7: movzx   eax, word ptr [esp+arg_8]
0x5B00CC: fld     st
0x5B00CE: or      eax, 0C00h
0x5B00D3: fmulp   st(2), st
0x5B00D5: mov     [esp+arg_10], eax
0x5B00D9: mov     eax, ds:0B3B3FCh
0x5B00DE: fldcw   word ptr [esp+arg_10]
0x5B00E2: fistp   [esp+arg_14]
0x5B00E6: mov     ecx, dword ptr [esp+arg_14]
0x5B00EA: div     ecx
0x5B00EC: fldcw   word ptr [esp+arg_8]
0x5B00F0: mov     [esp+arg_10], edx
0x5B00F4: fild    [esp+arg_10]
0x5B00F8: faddp   st(1), st
0x5B00FA: call    Double_To_SInt32
0x5B00FF: fld     dword ptr [edi+64h]
0x5B0102: fstp    [esp+arg_10]
0x5B0106: mov     [esp+arg_8], eax
0x5B010A: fld     [esp+arg_C]
0x5B010E: fldz
0x5B0110: fsub    st(1), st
0x5B0112: fld1
0x5B0114: fsub    st, st(1)
0x5B0116: fdivp   st(2), st
0x5B0118: fld     dword ptr [edi+68h]
0x5B011B: fld     [esp+arg_10]
0x5B011F: fld     st
0x5B0121: fsubp   st(2), st
0x5B0123: fxch    st(3)
0x5B0125: fmulp   st(1), st
0x5B0127: faddp   st(2), st
0x5B0129: fxch    st(1)
0x5B012B: fstp    dword ptr [esp+arg_14]
0x5B012F: fld     dword ptr [edi+64h]
0x5B0132: fstp    [esp+arg_10]
0x5B0136: fild    [esp+arg_8]
0x5B013A: fsub    st, st(1)
0x5B013C: fld     qword ptr ds:0A2FC70h
0x5B0142: fsubrp  st(2), st
0x5B0144: fdivrp  st(1), st
0x5B0146: fld     dword ptr [edi+60h]
0x5B0149: fld     [esp+arg_10]
0x5B014D: fld     st
0x5B014F: fsubp   st(2), st
0x5B0151: fxch    st(1)
0x5B0153: fmul    st, st(2)
0x5B0155: faddp   st(1), st
0x5B0157: fstp    [esp+arg_C]
0x5B015B: fld     dword ptr [esp+arg_14]
0x5B015F: fld     [esp+arg_C]
0x5B0163: fcom    st(1)
0x5B0165: fnstsw  ax
0x5B0167: test    ah, 5
0x5B016A: jp      short loc_5B0178
0x5B016C: fstp    st
0x5B016E: fstp    [esp+arg_C]
0x5B0172: fld     [esp+arg_C]
0x5B0176: jmp     short loc_5B017A
0x5B0178: fstp    st(1)
0x5B017A: fild    dword ptr [edi+54h]
0x5B017D: mov     edx, [esp+arg_20]
0x5B0181: lea     eax, [edx+edx*4]
0x5B0184: lea     ecx, [edi+eax*8]
0x5B0187: fstp    dword ptr [esp+arg_14]
0x5B018B: fild    dword ptr [edi+50h]
0x5B018E: fld     dword ptr [esp+arg_14]
0x5B0192: fld     st
0x5B0194: fsubp   st(2), st
0x5B0196: fxch    st(1)
0x5B0198: fmulp   st(3), st
0x5B019A: faddp   st(2), st
0x5B019C: fxch    st(1)
0x5B019E: fstp    [esp+arg_20]
0x5B01A2: fld     [esp+arg_20]
0x5B01A6: fnstcw  word ptr [esp+arg_20]
0x5B01AA: movzx   eax, word ptr [esp+arg_20]
0x5B01AF: or      eax, 0C00h
0x5B01B4: mov     dword ptr [esp+arg_14], eax
0x5B01B8: fldcw   word ptr [esp+arg_14]
0x5B01BC: fistp   [esp+arg_14]
0x5B01C0: mov     eax, dword ptr [esp+arg_14]
0x5B01C4: mov     [ecx+84h], eax
0x5B01CA: fldcw   word ptr [esp+arg_20]
0x5B01CE: fst     dword ptr [ecx+88h]
0x5B01D4: fld     dword ptr [edi+70h]
0x5B01D7: fdiv    dword ptr [edi+64h]
0x5B01DA: fmulp   st(1), st
0x5B01DC: fstp    dword ptr [ecx+8Ch]
0x5B01E2: mov     ecx, ds:0B33398h
0x5B01E8: mov     ebx, [ecx+24h]
0x5B01EB: test    ebx, ebx
0x5B01ED: jz      short loc_5B0235
0x5B01EF: lea     edx, [edx+edx*4+14h]
0x5B01F3: mov     ecx, [edi+edx*8]
0x5B01F6: test    ecx, ecx
0x5B01F8: lea     esi, [edi+edx*8]
0x5B01FB: jz      short loc_5B0223
0x5B01FD: call    sub_6B7260
0x5B0202: test    al, al
0x5B0204: jnz     short loc_5B0223
0x5B0206: mov     ecx, [esi]
0x5B0208: call    sub_6B73C0
0x5B020D: mov     edi, [esi]
0x5B020F: test    edi, edi
0x5B0211: jz      short loc_5B0223
0x5B0213: mov     ecx, edi; this
0x5B0215: call    sub_6B73E0
0x5B021A: push    edi
0x5B021B: call    FormHeapFree
0x5B0220: add     esp, 4
0x5B0223: push    1
0x5B0225: push    31h ; '1'
0x5B0227: push    offset aUilocktumblerm; "UILockTumblerMoveLP"
0x5B022C: mov     ecx, ebx
0x5B022E: call    PlaySound???
0x5B0233: mov     [esi], eax
0x5B0235: pop     edi
0x5B0236: pop     esi
0x5B0237: pop     ebx
0x5B0238: add     esp, 14h
0x5B023B: retn    4
