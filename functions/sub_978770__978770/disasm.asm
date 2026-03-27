0x978770: fld     [esp+arg_10]
0x978774: sub     esp, 3Ch
0x978777: lea     eax, [esp+3Ch+var_24]
0x97877B: push    eax; int
0x97877C: lea     ecx, [esp+40h+var_34]
0x978780: push    ecx; int
0x978781: mov     ecx, [esp+44h+arg_4]
0x978785: lea     edx, [esp+44h+var_30]
0x978789: push    edx; int
0x97878A: mov     edx, [esp+48h+arg_0]
0x97878E: lea     eax, [esp+48h+var_38]
0x978792: push    eax; int
0x978793: mov     eax, [esp+4Ch+arg_14]
0x978797: push    ecx; int
0x978798: push    edx; int
0x978799: push    eax; int
0x97879A: push    ecx
0x97879B: mov     ecx, [esp+5Ch+arg_C]
0x97879F: fstp    [esp+5Ch+var_5C]; float
0x9787A2: fld     [esp+5Ch+arg_18]
0x9787A6: push    ecx; int
0x9787A7: push    ecx
0x9787A8: fstp    [esp+64h+var_64]; float
0x9787AB: call    sub_977DF0
0x9787B0: add     esp, 28h
0x9787B3: test    eax, eax
0x9787B5: jz      loc_978A96
0x9787BB: mov     eax, [esp+3Ch+arg_8]
0x9787BF: mov     edx, [eax+8]
0x9787C2: push    esi
0x9787C3: mov     esi, [eax+4]
0x9787C6: push    edi
0x9787C7: mov     edi, [eax]
0x9787C9: lea     eax, [esp+44h+var_C]
0x9787CD: push    eax
0x9787CE: lea     ecx, [esp+48h+var_30]
0x9787D2: push    ecx
0x9787D3: push    edx
0x9787D4: push    esi
0x9787D5: push    edi
0x9787D6: call    sub_977C60
0x9787DB: lea     eax, [esp+58h+var_18]
0x9787DF: push    eax
0x9787E0: lea     ecx, [esp+5Ch+var_24]
0x9787E4: push    ecx
0x9787E5: push    edx
0x9787E6: push    esi
0x9787E7: push    edi
0x9787E8: call    sub_977C60
0x9787ED: fldz
0x9787EF: fld     [esp+6Ch+var_C]
0x9787F3: add     esp, 28h
0x9787F6: fcom    st(1)
0x9787F8: pop     edi
0x9787F9: pop     esi
0x9787FA: fnstsw  ax
0x9787FC: test    ah, 5
0x9787FF: jp      loc_978933
0x978805: fld     [esp+3Ch+var_18]
0x978809: fcom    st(2)
0x97880B: fnstsw  ax
0x97880D: test    ah, 5
0x978810: jp      short loc_97881E
0x978812: fstp    st(2)
0x978814: fstp    st(1)
0x978816: xor     eax, eax
0x978818: fstp    st
0x97881A: add     esp, 3Ch
0x97881D: retn
0x97881E: fsubr   st, st(1)
0x978820: fdivp   st(1), st
0x978822: fstp    [esp+3Ch+var_3C]
0x978825: fld     [esp+3Ch+var_3C]
0x978828: fld     st
0x97882A: fld1
0x97882C: fsubrp  st(1), st
0x97882E: fld     [esp+3Ch+var_14]
0x978832: fmul    st, st(2)
0x978834: fld     [esp+3Ch+var_8]
0x978838: fmul    st, st(2)
0x97883A: faddp   st(1), st
0x97883C: fstp    [esp+3Ch+var_3C]
0x97883F: fld     [esp+3Ch+var_3C]
0x978842: fcomp   st(3)
0x978844: fnstsw  ax
0x978846: test    ah, 1
0x978849: jnz     loc_978A90
0x97884F: fld     [esp+3Ch+var_10]
0x978853: fmul    st, st(2)
0x978855: fld     [esp+3Ch+var_4]
0x978859: fmul    st, st(2)
0x97885B: faddp   st(1), st
0x97885D: fstp    [esp+3Ch+var_3C]
0x978860: fld     [esp+3Ch+var_3C]
0x978863: fcomp   st(3)
0x978865: fnstsw  ax
0x978867: fstp    st(2)
0x978869: test    ah, 1
0x97886C: jnz     loc_978A92
0x978872: mov     ecx, [esp+3Ch+arg_1C]
0x978876: fld     st
0x978878: fmul    [esp+3Ch+var_34]
0x97887C: fld     [esp+3Ch+var_38]
0x978880: fmul    st, st(3)
0x978882: faddp   st(1), st
0x978884: fstp    [esp+3Ch+var_3C]
0x978887: fld     [esp+3Ch+var_3C]
0x97888A: fld     dword ptr [ecx]
0x97888C: fcomp   st(1)
0x97888E: fnstsw  ax
0x978890: test    ah, 41h
0x978893: jnz     loc_978924
0x978899: fstp    dword ptr [ecx]
0x97889B: mov     eax, [esp+3Ch+arg_20]
0x97889F: fld     [esp+3Ch+var_24]
0x9788A3: fmul    st, st(1)
0x9788A5: fstp    [esp+3Ch+var_18]
0x9788A9: fld     [esp+3Ch+var_20]
0x9788AD: fmul    st, st(1)
0x9788AF: fstp    [esp+3Ch+var_14]
0x9788B3: fmul    [esp+3Ch+var_1C]
0x9788B7: fstp    [esp+3Ch+var_10]
0x9788BB: fstp    [esp+3Ch+var_34]
0x9788BF: fld     [esp+3Ch+var_30]
0x9788C3: fld     [esp+3Ch+var_34]
0x9788C7: fld     st
0x9788C9: fmulp   st(2), st
0x9788CB: fxch    st(1)
0x9788CD: fstp    [esp+3Ch+var_C]
0x9788D1: fld     [esp+3Ch+var_2C]
0x9788D5: fmul    st, st(1)
0x9788D7: fstp    [esp+3Ch+var_8]
0x9788DB: fmul    [esp+3Ch+var_28]
0x9788DF: fstp    [esp+3Ch+var_4]
0x9788E3: fld     [esp+3Ch+var_C]
0x9788E7: fadd    [esp+3Ch+var_18]
0x9788EB: fstp    [esp+3Ch+var_24]
0x9788EF: mov     edx, [esp+3Ch+var_24]
0x9788F3: fld     [esp+3Ch+var_8]
0x9788F7: mov     [eax], edx
0x9788F9: fadd    [esp+3Ch+var_14]
0x9788FD: fstp    [esp+3Ch+var_20]
0x978901: mov     ecx, [esp+3Ch+var_20]
0x978905: fld     [esp+3Ch+var_4]
0x978909: mov     [eax+4], ecx
0x97890C: fadd    [esp+3Ch+var_10]
0x978910: fstp    [esp+3Ch+var_1C]
0x978914: mov     edx, [esp+3Ch+var_1C]
0x978918: mov     [eax+8], edx
0x97891B: mov     eax, 1
0x978920: add     esp, 3Ch
0x978923: retn
0x978924: fstp    st
0x978926: fstp    st
0x978928: fstp    st
0x97892A: mov     eax, 1
0x97892F: add     esp, 3Ch
0x978932: retn
0x978933: fld     [esp+3Ch+var_8]
0x978937: fcom    st(2)
0x978939: fnstsw  ax
0x97893B: test    ah, 5
0x97893E: jp      loc_978A6E
0x978944: fld     [esp+3Ch+var_14]
0x978948: fcom    st(3)
0x97894A: fnstsw  ax
0x97894C: test    ah, 5
0x97894F: jnp     loc_978BA6
0x978955: fsubr   st, st(1)
0x978957: fdivp   st(1), st
0x978959: fstp    [esp+3Ch+var_3C]
0x97895C: fld     [esp+3Ch+var_3C]
0x97895F: fld     st
0x978961: fld1
0x978963: fsubrp  st(1), st
0x978965: fld     st(1)
0x978967: fmul    [esp+3Ch+var_18]
0x97896B: fxch    st(3)
0x97896D: fmul    st, st(1)
0x97896F: faddp   st(3), st
0x978971: fxch    st(2)
0x978973: fstp    [esp+3Ch+var_3C]
0x978976: fld     [esp+3Ch+var_3C]
0x978979: fcomp   st(3)
0x97897B: fnstsw  ax
0x97897D: test    ah, 1
0x978980: jnz     loc_978812
0x978986: fld     [esp+3Ch+var_10]
0x97898A: fmul    st, st(1)
0x97898C: fld     [esp+3Ch+var_4]
0x978990: fmul    st, st(3)
0x978992: faddp   st(1), st
0x978994: fstp    [esp+3Ch+var_3C]
0x978997: fld     [esp+3Ch+var_3C]
0x97899A: fcomp   st(3)
0x97899C: fnstsw  ax
0x97899E: fstp    st(2)
0x9789A0: test    ah, 1
0x9789A3: jnz     loc_978814
0x9789A9: mov     ecx, [esp+3Ch+arg_1C]
0x9789AD: fld     st(1)
0x9789AF: fmul    [esp+3Ch+var_34]
0x9789B3: fld     [esp+3Ch+var_38]
0x9789B7: fmul    st, st(2)
0x9789B9: faddp   st(1), st
0x9789BB: fstp    [esp+3Ch+var_3C]
0x9789BE: fld     [esp+3Ch+var_3C]
0x9789C1: fld     dword ptr [ecx]
0x9789C3: fcomp   st(1)
0x9789C5: fnstsw  ax
0x9789C7: test    ah, 41h
0x9789CA: jnz     loc_978A5F
0x9789D0: fstp    dword ptr [ecx]
0x9789D2: mov     eax, [esp+3Ch+arg_20]
0x9789D6: fld     [esp+3Ch+var_24]
0x9789DA: fmul    st, st(2)
0x9789DC: fstp    [esp+3Ch+var_18]
0x9789E0: fld     [esp+3Ch+var_20]
0x9789E4: fmul    st, st(2)
0x9789E6: fstp    [esp+3Ch+var_14]
0x9789EA: fld     [esp+3Ch+var_1C]
0x9789EE: fmulp   st(2), st
0x9789F0: fxch    st(1)
0x9789F2: fstp    [esp+3Ch+var_10]
0x9789F6: fstp    [esp+3Ch+var_34]
0x9789FA: fld     [esp+3Ch+var_30]
0x9789FE: fld     [esp+3Ch+var_34]
0x978A02: fld     st
0x978A04: fmulp   st(2), st
0x978A06: fxch    st(1)
0x978A08: fstp    [esp+3Ch+var_C]
0x978A0C: fld     [esp+3Ch+var_2C]
0x978A10: fmul    st, st(1)
0x978A12: fstp    [esp+3Ch+var_8]
0x978A16: fmul    [esp+3Ch+var_28]
0x978A1A: fstp    [esp+3Ch+var_4]
0x978A1E: fld     [esp+3Ch+var_C]
0x978A22: fadd    [esp+3Ch+var_18]
0x978A26: fstp    [esp+3Ch+var_24]
0x978A2A: mov     ecx, [esp+3Ch+var_24]
0x978A2E: fld     [esp+3Ch+var_8]
0x978A32: mov     [eax], ecx
0x978A34: fadd    [esp+3Ch+var_14]
0x978A38: fstp    [esp+3Ch+var_20]
0x978A3C: mov     edx, [esp+3Ch+var_20]
0x978A40: fld     [esp+3Ch+var_4]
0x978A44: mov     [eax+4], edx
0x978A47: fadd    [esp+3Ch+var_10]
0x978A4B: fstp    [esp+3Ch+var_1C]
0x978A4F: mov     ecx, [esp+3Ch+var_1C]
0x978A53: mov     [eax+8], ecx
0x978A56: mov     eax, 1
0x978A5B: add     esp, 3Ch
0x978A5E: retn
0x978A5F: fstp    st
0x978A61: mov     eax, 1
0x978A66: fstp    st(1)
0x978A68: fstp    st
0x978A6A: add     esp, 3Ch
0x978A6D: retn
0x978A6E: fld     [esp+3Ch+var_4]
0x978A72: fcom    st(3)
0x978A74: fnstsw  ax
0x978A76: test    ah, 5
0x978A79: jp      loc_978BB4
0x978A7F: fld     [esp+3Ch+var_10]
0x978A83: fcom    st(4)
0x978A85: fnstsw  ax
0x978A87: test    ah, 5
0x978A8A: jp      short loc_978A9C
0x978A8C: fstp    st(4)
0x978A8E: fstp    st
0x978A90: fstp    st(2)
0x978A92: fstp    st
0x978A94: fstp    st
0x978A96: xor     eax, eax
0x978A98: add     esp, 3Ch
0x978A9B: retn
0x978A9C: fsubr   st, st(1)
0x978A9E: fdivp   st(1), st
0x978AA0: fstp    [esp+3Ch+var_3C]
0x978AA3: fld     [esp+3Ch+var_3C]
0x978AA6: fld     st
0x978AA8: fld1
0x978AAA: fsubrp  st(1), st
0x978AAC: fld     st(1)
0x978AAE: fmul    [esp+3Ch+var_18]
0x978AB2: fxch    st(4)
0x978AB4: fmul    st, st(1)
0x978AB6: faddp   st(4), st
0x978AB8: fxch    st(3)
0x978ABA: fstp    [esp+3Ch+var_3C]
0x978ABD: fld     [esp+3Ch+var_3C]
0x978AC0: fcomp   st(4)
0x978AC2: fnstsw  ax
0x978AC4: test    ah, 1
0x978AC7: jnz     loc_978BA6
0x978ACD: fld     [esp+3Ch+var_14]
0x978AD1: fmul    st, st(1)
0x978AD3: fxch    st(2)
0x978AD5: fmul    st, st(3)
0x978AD7: faddp   st(2), st
0x978AD9: fxch    st(1)
0x978ADB: fstp    [esp+3Ch+var_3C]
0x978ADE: fld     [esp+3Ch+var_3C]
0x978AE1: fcomp   st(3)
0x978AE3: fnstsw  ax
0x978AE5: fstp    st(2)
0x978AE7: test    ah, 1
0x978AEA: jnz     loc_978814
0x978AF0: mov     ecx, [esp+3Ch+arg_1C]
0x978AF4: fld     st(1)
0x978AF6: fmul    [esp+3Ch+var_34]
0x978AFA: fld     [esp+3Ch+var_38]
0x978AFE: fmul    st, st(2)
0x978B00: faddp   st(1), st
0x978B02: fstp    [esp+3Ch+var_3C]
0x978B05: fld     [esp+3Ch+var_3C]
0x978B08: fld     dword ptr [ecx]
0x978B0A: fcomp   st(1)
0x978B0C: fnstsw  ax
0x978B0E: test    ah, 41h
0x978B11: jnz     loc_978A5F
0x978B17: fstp    dword ptr [ecx]
0x978B19: mov     eax, [esp+3Ch+arg_20]
0x978B1D: fld     [esp+3Ch+var_24]
0x978B21: fmul    st, st(2)
0x978B23: fstp    [esp+3Ch+var_18]
0x978B27: fld     [esp+3Ch+var_20]
0x978B2B: fmul    st, st(2)
0x978B2D: fstp    [esp+3Ch+var_14]
0x978B31: fld     [esp+3Ch+var_1C]
0x978B35: fmulp   st(2), st
0x978B37: fxch    st(1)
0x978B39: fstp    [esp+3Ch+var_10]
0x978B3D: fstp    [esp+3Ch+var_34]
0x978B41: fld     [esp+3Ch+var_30]
0x978B45: fld     [esp+3Ch+var_34]
0x978B49: fld     st
0x978B4B: fmulp   st(2), st
0x978B4D: fxch    st(1)
0x978B4F: fstp    [esp+3Ch+var_C]
0x978B53: fld     [esp+3Ch+var_2C]
0x978B57: fmul    st, st(1)
0x978B59: fstp    [esp+3Ch+var_8]
0x978B5D: fmul    [esp+3Ch+var_28]
0x978B61: fstp    [esp+3Ch+var_4]
0x978B65: fld     [esp+3Ch+var_C]
0x978B69: fadd    [esp+3Ch+var_18]
0x978B6D: fstp    [esp+3Ch+var_24]
0x978B71: mov     edx, [esp+3Ch+var_24]
0x978B75: fld     [esp+3Ch+var_8]
0x978B79: mov     [eax], edx
0x978B7B: fadd    [esp+3Ch+var_14]
0x978B7F: fstp    [esp+3Ch+var_20]
0x978B83: mov     ecx, [esp+3Ch+var_20]
0x978B87: fld     [esp+3Ch+var_4]
0x978B8B: mov     [eax+4], ecx
0x978B8E: fadd    [esp+3Ch+var_10]
0x978B92: fstp    [esp+3Ch+var_1C]
0x978B96: mov     edx, [esp+3Ch+var_1C]
0x978B9A: mov     [eax+8], edx
0x978B9D: mov     eax, 1
0x978BA2: add     esp, 3Ch
0x978BA5: retn
0x978BA6: fstp    st(3)
0x978BA8: xor     eax, eax
0x978BAA: fstp    st(2)
0x978BAC: fstp    st
0x978BAE: fstp    st
0x978BB0: add     esp, 3Ch
0x978BB3: retn
0x978BB4: mov     ecx, [esp+3Ch+arg_1C]
0x978BB8: fstp    st(3)
0x978BBA: fstp    st(2)
0x978BBC: fstp    st
0x978BBE: fstp    st
0x978BC0: fld     [esp+3Ch+var_38]
0x978BC4: fld     dword ptr [ecx]
0x978BC6: fcomp   st(1)
0x978BC8: fnstsw  ax
0x978BCA: test    ah, 41h
0x978BCD: jnz     loc_978928
0x978BD3: mov     eax, [esp+3Ch+arg_20]
0x978BD7: fstp    dword ptr [ecx]
0x978BD9: mov     ecx, [esp+3Ch+var_30]
0x978BDD: mov     edx, [esp+3Ch+var_2C]
0x978BE1: mov     [eax], ecx
0x978BE3: mov     ecx, [esp+3Ch+var_28]
0x978BE7: mov     [eax+4], edx
0x978BEA: mov     [eax+8], ecx
0x978BED: mov     eax, 1
0x978BF2: add     esp, 3Ch
0x978BF5: retn
