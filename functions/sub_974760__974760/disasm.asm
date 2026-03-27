0x974760: sub     esp, 28h
0x974763: push    esi
0x974764: mov     esi, ecx
0x974766: cmp     dword ptr [esi+18h], 2
0x97476A: jnz     loc_974933
0x974770: fld     dword ptr [esi+1Ch]
0x974773: mov     eax, [esp+2Ch+arg_0]
0x974777: fstp    [esp+2Ch+var_28]
0x97477B: fld     [esp+2Ch+var_28]
0x97477F: fld     dword ptr [eax]
0x974781: fmul    st, st(1)
0x974783: fstp    [esp+2Ch+var_24]
0x974787: fld     dword ptr [eax+4]
0x97478A: fmul    st, st(1)
0x97478C: fstp    [esp+2Ch+var_20]
0x974790: fmul    dword ptr [eax+8]
0x974793: mov     eax, [esi+38h]
0x974796: fstp    [esp+2Ch+var_1C]
0x97479A: fld     [esp+2Ch+var_24]
0x97479E: fadd    dword ptr [eax+4]
0x9747A1: fstp    [esp+2Ch+var_18]
0x9747A5: mov     ecx, [esp+2Ch+var_18]
0x9747A9: fld     dword ptr [eax+8]
0x9747AC: fadd    [esp+2Ch+var_20]
0x9747B0: fstp    [esp+2Ch+var_14]
0x9747B4: mov     edx, [esp+2Ch+var_14]
0x9747B8: fld     dword ptr [eax+0Ch]
0x9747BB: mov     [esi+20h], ecx
0x9747BE: fadd    [esp+2Ch+var_1C]
0x9747C2: mov     [esi+24h], edx
0x9747C5: fstp    [esp+2Ch+var_10]
0x9747C9: mov     ecx, [esp+2Ch+var_10]
0x9747CD: mov     [esi+28h], ecx
0x9747D0: fld     dword ptr [esi+44h]
0x9747D3: fstp    [esp+2Ch+arg_0]
0x9747D7: fld     [esp+2Ch+arg_0]
0x9747DB: fld     dword ptr [eax+10h]
0x9747DE: fmul    st, st(1)
0x9747E0: fstp    [esp+2Ch+var_24]
0x9747E4: fld     dword ptr [eax+14h]
0x9747E7: fmul    st, st(1)
0x9747E9: fstp    [esp+2Ch+var_20]
0x9747ED: fmul    dword ptr [eax+18h]
0x9747F0: fstp    [esp+2Ch+var_1C]
0x9747F4: fld     dword ptr [esi+20h]
0x9747F7: fadd    [esp+2Ch+var_24]
0x9747FB: fstp    dword ptr [esi+20h]
0x9747FE: fld     [esp+2Ch+var_20]
0x974802: fadd    dword ptr [esi+24h]
0x974805: fstp    dword ptr [esi+24h]
0x974808: fld     dword ptr [esi+28h]
0x97480B: fadd    [esp+2Ch+var_1C]
0x97480F: fstp    dword ptr [esi+28h]
0x974812: mov     eax, [esi+38h]
0x974815: fld     dword ptr [esi+48h]
0x974818: add     eax, 1Ch
0x97481B: fstp    [esp+2Ch+arg_0]
0x97481F: fld     [esp+2Ch+arg_0]
0x974823: fld     dword ptr [eax]
0x974825: fmul    st, st(1)
0x974827: fstp    [esp+2Ch+var_24]
0x97482B: fld     dword ptr [eax+4]
0x97482E: fmul    st, st(1)
0x974830: fstp    [esp+2Ch+var_20]
0x974834: fmul    dword ptr [eax+8]
0x974837: fstp    [esp+2Ch+var_1C]
0x97483B: fld     dword ptr [esi+20h]
0x97483E: fadd    [esp+2Ch+var_24]
0x974842: fstp    dword ptr [esi+20h]
0x974845: fld     [esp+2Ch+var_20]
0x974849: fadd    dword ptr [esi+24h]
0x97484C: fstp    dword ptr [esi+24h]
0x97484F: fld     dword ptr [esi+28h]
0x974852: fadd    [esp+2Ch+var_1C]
0x974856: fstp    dword ptr [esi+28h]
0x974859: mov     eax, [esi+38h]
0x97485C: fld     dword ptr [esi+4Ch]
0x97485F: add     eax, 28h ; '('
0x974862: fstp    [esp+2Ch+arg_0]
0x974866: fld     [esp+2Ch+arg_0]
0x97486A: fld     dword ptr [eax]
0x97486C: fmul    st, st(1)
0x97486E: fstp    [esp+2Ch+var_24]
0x974872: fld     dword ptr [eax+4]
0x974875: fmul    st, st(1)
0x974877: fstp    [esp+2Ch+var_20]
0x97487B: fmul    dword ptr [eax+8]
0x97487E: mov     eax, [esp+2Ch+arg_4]
0x974882: lea     ecx, [esi+2Ch]
0x974885: fstp    [esp+2Ch+var_1C]
0x974889: fld     dword ptr [esi+20h]
0x97488C: fadd    [esp+2Ch+var_24]
0x974890: fstp    dword ptr [esi+20h]
0x974893: fld     [esp+2Ch+var_20]
0x974897: fadd    dword ptr [esi+24h]
0x97489A: fstp    dword ptr [esi+24h]
0x97489D: fld     dword ptr [esi+28h]
0x9748A0: fadd    [esp+2Ch+var_1C]
0x9748A4: fstp    dword ptr [esi+28h]
0x9748A7: fld     dword ptr [esi+1Ch]
0x9748AA: fstp    [esp+2Ch+arg_0]
0x9748AE: fld     [esp+2Ch+arg_0]
0x9748B2: fld     dword ptr [eax]
0x9748B4: fmul    st, st(1)
0x9748B6: fstp    [esp+2Ch+var_18]
0x9748BA: fld     dword ptr [eax+4]
0x9748BD: fmul    st, st(1)
0x9748BF: fstp    [esp+2Ch+var_14]
0x9748C3: fmul    dword ptr [eax+8]
0x9748C6: mov     eax, [esi+3Ch]
0x9748C9: add     eax, 4
0x9748CC: fstp    [esp+2Ch+var_10]
0x9748D0: fld     dword ptr [eax]
0x9748D2: fadd    [esp+2Ch+var_18]
0x9748D6: fstp    [esp+2Ch+var_24]
0x9748DA: fld     dword ptr [eax+4]
0x9748DD: fadd    [esp+2Ch+var_14]
0x9748E1: fstp    [esp+2Ch+var_20]
0x9748E5: fld     dword ptr [eax+8]
0x9748E8: fadd    [esp+2Ch+var_10]
0x9748EC: fstp    [esp+2Ch+var_1C]
0x9748F0: fld     [esp+2Ch+var_24]
0x9748F4: fsub    dword ptr [esi+20h]
0x9748F7: fstp    [esp+2Ch+var_18]
0x9748FB: mov     edx, [esp+2Ch+var_18]
0x9748FF: fld     [esp+2Ch+var_20]
0x974903: fsub    dword ptr [esi+24h]
0x974906: fstp    [esp+2Ch+var_14]
0x97490A: mov     eax, [esp+2Ch+var_14]
0x97490E: fld     [esp+2Ch+var_1C]
0x974912: fsub    dword ptr [esi+28h]
0x974915: mov     [ecx], edx
0x974917: mov     [ecx+4], eax
0x97491A: fstp    [esp+2Ch+var_10]
0x97491E: mov     edx, [esp+2Ch+var_10]
0x974922: mov     [ecx+8], edx
0x974925: call    sub_43F350
0x97492A: fstp    st
0x97492C: pop     esi
0x97492D: add     esp, 28h
0x974930: retn    8
0x974933: mov     eax, [esp+2Ch+arg_4]
0x974937: fld     dword ptr [eax+4]
0x97493A: mov     ecx, [esp+2Ch+arg_0]
0x97493E: fld     dword ptr [eax]
0x974940: fld     dword ptr [eax+8]
0x974943: fld     dword ptr [ecx+4]
0x974946: fld     dword ptr [ecx]
0x974948: fld     dword ptr [ecx+8]
0x97494B: fld     st(5)
0x97494D: fmulp   st(6), st
0x97494F: fld     st(4)
0x974951: fmulp   st(5), st
0x974953: fxch    st(5)
0x974955: faddp   st(4), st
0x974957: fld     st(2)
0x974959: fmulp   st(3), st
0x97495B: fxch    st(3)
0x97495D: faddp   st(2), st
0x97495F: fxch    st(1)
0x974961: fstp    [esp+2Ch+arg_4]
0x974965: fld     [esp+2Ch+arg_4]
0x974969: fld     st(1)
0x97496B: fmulp   st(2), st
0x97496D: fld     st(2)
0x97496F: fmulp   st(3), st
0x974971: fxch    st(1)
0x974973: faddp   st(2), st
0x974975: fld     st(2)
0x974977: fmulp   st(3), st
0x974979: fxch    st(1)
0x97497B: faddp   st(2), st
0x97497D: fxch    st(1)
0x97497F: fstp    [esp+2Ch+arg_4]
0x974983: fsub    [esp+2Ch+arg_4]
0x974987: fstp    [esp+2Ch+arg_4]
0x97498B: fld     [esp+2Ch+arg_4]
0x97498F: fld     qword ptr ds:0AA3DC8h
0x974995: fcomp   st(1)
0x974997: fnstsw  ax
0x974999: test    ah, 41h
0x97499C: jnz     loc_974ADA
0x9749A2: mov     eax, [ecx]
0x9749A4: fstp    st
0x9749A6: mov     edx, [ecx+4]
0x9749A9: mov     [esp+2Ch+var_24], eax
0x9749AD: mov     eax, [ecx+8]
0x9749B0: push    edi
0x9749B1: lea     ecx, [esp+30h+var_24]
0x9749B5: mov     [esp+30h+var_20], edx
0x9749B9: mov     [esp+30h+var_1C], eax
0x9749BD: call    sub_43F350
0x9749C2: fstp    st
0x9749C4: mov     edi, [esi+3Ch]
0x9749C7: fld     dword ptr [edi+10h]
0x9749CA: mov     eax, [esi+38h]
0x9749CD: fadd    st, st
0x9749CF: add     eax, 4
0x9749D2: lea     ecx, [esp+30h+var_24]
0x9749D6: fstp    [esp+30h+arg_4]
0x9749DA: fld     [esp+30h+arg_4]
0x9749DE: fld     [esp+30h+var_24]
0x9749E2: fmul    st, st(1)
0x9749E4: fstp    [esp+30h+var_18]
0x9749E8: fld     [esp+30h+var_20]
0x9749EC: fmul    st, st(1)
0x9749EE: fstp    [esp+30h+var_14]
0x9749F2: fmul    [esp+30h+var_1C]
0x9749F6: fstp    [esp+30h+var_10]
0x9749FA: fld     dword ptr [eax]
0x9749FC: fsub    [esp+30h+var_18]
0x974A00: fstp    [esp+30h+var_C]
0x974A04: fld     dword ptr [eax+4]
0x974A07: fsub    [esp+30h+var_14]
0x974A0B: fstp    [esp+30h+var_8]
0x974A0F: fld     dword ptr [eax+8]
0x974A12: fsub    [esp+30h+var_10]
0x974A16: fstp    [esp+30h+var_4]
0x974A1A: fld     [esp+30h+var_C]
0x974A1E: fsub    dword ptr [edi+4]
0x974A21: fstp    [esp+30h+var_24]
0x974A25: fld     [esp+30h+var_8]
0x974A29: fsub    dword ptr [edi+8]
0x974A2C: fstp    [esp+30h+var_20]
0x974A30: fld     [esp+30h+var_4]
0x974A34: fsub    dword ptr [edi+0Ch]
0x974A37: fstp    [esp+30h+var_1C]
0x974A3B: call    sub_43F350
0x974A40: fstp    st
0x974A42: fld     dword ptr [edi+10h]
0x974A45: fstp    [esp+30h+arg_4]
0x974A49: fld     [esp+30h+arg_4]
0x974A4D: fld     [esp+30h+var_24]
0x974A51: fld     st
0x974A53: fmul    st, st(2)
0x974A55: fstp    [esp+30h+var_C]
0x974A59: fld     [esp+30h+var_20]
0x974A5D: fld     st
0x974A5F: fmul    st, st(3)
0x974A61: fstp    [esp+30h+var_8]
0x974A65: fld     [esp+30h+var_1C]
0x974A69: fld     st
0x974A6B: fmulp   st(4), st
0x974A6D: fxch    st(3)
0x974A6F: fstp    [esp+30h+var_4]
0x974A73: fld     dword ptr [edi+4]
0x974A76: fadd    [esp+30h+var_C]
0x974A7A: fstp    [esp+30h+var_18]
0x974A7E: mov     ecx, [esp+30h+var_18]
0x974A82: fld     dword ptr [edi+8]
0x974A85: fadd    [esp+30h+var_8]
0x974A89: fstp    [esp+30h+var_14]
0x974A8D: mov     edx, [esp+30h+var_14]
0x974A91: fld     dword ptr [edi+0Ch]
0x974A94: mov     [esi+20h], ecx
0x974A97: fadd    [esp+30h+var_4]
0x974A9B: mov     [esi+24h], edx
0x974A9E: fstp    [esp+30h+var_10]
0x974AA2: mov     eax, [esp+30h+var_10]
0x974AA6: fxch    st(1)
0x974AA8: mov     [esi+28h], eax
0x974AAB: fchs
0x974AAD: fstp    [esp+30h+var_C]
0x974AB1: mov     ecx, [esp+30h+var_C]
0x974AB5: fchs
0x974AB7: fstp    [esp+30h+var_8]
0x974ABB: mov     edx, [esp+30h+var_8]
0x974ABF: mov     [esi+2Ch], ecx
0x974AC2: fchs
0x974AC4: mov     [esi+30h], edx
0x974AC7: fstp    [esp+30h+var_4]
0x974ACB: mov     eax, [esp+30h+var_4]
0x974ACF: pop     edi
0x974AD0: mov     [esi+34h], eax
0x974AD3: pop     esi
0x974AD4: add     esp, 28h
0x974AD7: retn    8
0x974ADA: fcomp   qword ptr ds:0AA3AF8h
0x974AE0: fnstsw  ax
0x974AE2: test    ah, 41h
0x974AE5: mov     eax, [esi+38h]
0x974AE8: jnz     loc_974BD2
0x974AEE: mov     ecx, [eax+4]
0x974AF1: mov     [esi+20h], ecx
0x974AF4: mov     edx, [eax+8]
0x974AF7: mov     [esi+24h], edx
0x974AFA: mov     ecx, [eax+0Ch]
0x974AFD: mov     [esi+28h], ecx
0x974B00: fld     dword ptr [esi+44h]
0x974B03: fstp    [esp+2Ch+arg_4]
0x974B07: fld     [esp+2Ch+arg_4]
0x974B0B: fld     dword ptr [eax+10h]
0x974B0E: fmul    st, st(1)
0x974B10: fstp    [esp+2Ch+var_24]
0x974B14: fld     dword ptr [eax+14h]
0x974B17: fmul    st, st(1)
0x974B19: fstp    [esp+2Ch+var_20]
0x974B1D: fmul    dword ptr [eax+18h]
0x974B20: fstp    [esp+2Ch+var_1C]
0x974B24: fld     dword ptr [esi+20h]
0x974B27: fadd    [esp+2Ch+var_24]
0x974B2B: fstp    dword ptr [esi+20h]
0x974B2E: fld     dword ptr [esi+24h]
0x974B31: fadd    [esp+2Ch+var_20]
0x974B35: fstp    dword ptr [esi+24h]
0x974B38: fld     [esp+2Ch+var_1C]
0x974B3C: fadd    dword ptr [esi+28h]
0x974B3F: fstp    dword ptr [esi+28h]
0x974B42: mov     eax, [esi+38h]
0x974B45: fld     dword ptr [esi+48h]
0x974B48: add     eax, 1Ch
0x974B4B: fstp    [esp+2Ch+arg_4]
0x974B4F: fld     [esp+2Ch+arg_4]
0x974B53: fld     dword ptr [eax]
0x974B55: fmul    st, st(1)
0x974B57: fstp    [esp+2Ch+var_24]
0x974B5B: fld     dword ptr [eax+4]
0x974B5E: fmul    st, st(1)
0x974B60: fstp    [esp+2Ch+var_20]
0x974B64: fmul    dword ptr [eax+8]
0x974B67: fstp    [esp+2Ch+var_1C]
0x974B6B: fld     dword ptr [esi+20h]
0x974B6E: fadd    [esp+2Ch+var_24]
0x974B72: fstp    dword ptr [esi+20h]
0x974B75: fld     dword ptr [esi+24h]
0x974B78: fadd    [esp+2Ch+var_20]
0x974B7C: fstp    dword ptr [esi+24h]
0x974B7F: fld     [esp+2Ch+var_1C]
0x974B83: fadd    dword ptr [esi+28h]
0x974B86: fstp    dword ptr [esi+28h]
0x974B89: mov     eax, [esi+38h]
0x974B8C: fld     dword ptr [esi+4Ch]
0x974B8F: add     eax, 28h ; '('
0x974B92: fstp    [esp+2Ch+arg_4]
0x974B96: fld     [esp+2Ch+arg_4]
0x974B9A: fld     dword ptr [eax]
0x974B9C: fmul    st, st(1)
0x974B9E: fstp    [esp+2Ch+var_24]
0x974BA2: fld     dword ptr [eax+4]
0x974BA5: fmul    st, st(1)
0x974BA7: fstp    [esp+2Ch+var_20]
0x974BAB: fmul    dword ptr [eax+8]
0x974BAE: fstp    [esp+2Ch+var_1C]
0x974BB2: fld     dword ptr [esi+20h]
0x974BB5: fadd    [esp+2Ch+var_24]
0x974BB9: fstp    dword ptr [esi+20h]
0x974BBC: fld     dword ptr [esi+24h]
0x974BBF: fadd    [esp+2Ch+var_20]
0x974BC3: fstp    dword ptr [esi+24h]
0x974BC6: fld     [esp+2Ch+var_1C]
0x974BCA: fadd    dword ptr [esi+28h]
0x974BCD: fstp    dword ptr [esi+28h]
0x974BD0: jmp     short loc_974C31
0x974BD2: mov     ecx, [esi+3Ch]
0x974BD5: fld     dword ptr [ecx+4]
0x974BD8: add     eax, 4
0x974BDB: fadd    dword ptr [eax]
0x974BDD: add     ecx, 4
0x974BE0: fstp    [esp+2Ch+var_C]
0x974BE4: fld     dword ptr [ecx+4]
0x974BE7: fadd    dword ptr [eax+4]
0x974BEA: fstp    [esp+2Ch+var_8]
0x974BEE: fld     dword ptr [ecx+8]
0x974BF1: fadd    dword ptr [eax+8]
0x974BF4: fstp    [esp+2Ch+var_4]
0x974BF8: fld     [esp+2Ch+var_C]
0x974BFC: fld     qword ptr ds:0A2FAA0h
0x974C02: fmul    st(1), st
0x974C04: fxch    st(1)
0x974C06: fstp    [esp+2Ch+var_18]
0x974C0A: mov     edx, [esp+2Ch+var_18]
0x974C0E: fld     [esp+2Ch+var_8]
0x974C12: mov     [esi+20h], edx
0x974C15: fmul    st, st(1)
0x974C17: fstp    [esp+2Ch+var_14]
0x974C1B: mov     eax, [esp+2Ch+var_14]
0x974C1F: mov     [esi+24h], eax
0x974C22: fmul    [esp+2Ch+var_4]
0x974C26: fstp    [esp+2Ch+var_10]
0x974C2A: mov     ecx, [esp+2Ch+var_10]
0x974C2E: mov     [esi+28h], ecx
0x974C31: mov     eax, [esi+3Ch]
0x974C34: fld     dword ptr [eax+4]
0x974C37: add     eax, 4
0x974C3A: fsub    dword ptr [esi+20h]
0x974C3D: lea     ecx, [esi+2Ch]
0x974C40: fstp    [esp+2Ch+var_C]
0x974C44: mov     edx, [esp+2Ch+var_C]
0x974C48: fld     dword ptr [eax+4]
0x974C4B: fsub    dword ptr [esi+24h]
0x974C4E: fstp    [esp+2Ch+var_8]
0x974C52: fld     dword ptr [eax+8]
0x974C55: mov     eax, [esp+2Ch+var_8]
0x974C59: fsub    dword ptr [esi+28h]
0x974C5C: mov     [ecx], edx
0x974C5E: mov     [ecx+4], eax
0x974C61: fstp    [esp+2Ch+var_4]
0x974C65: mov     edx, [esp+2Ch+var_4]
0x974C69: mov     [ecx+8], edx
0x974C6C: call    sub_43F350
0x974C71: fstp    st
0x974C73: pop     esi
0x974C74: add     esp, 28h
0x974C77: retn    8
