0x4D5E30: push    0FFFFFFFFh
0x4D5E32: push    offset SEH_4D5E30
0x4D5E37: mov     eax, large fs:0
0x4D5E3D: push    eax
0x4D5E3E: sub     esp, 20h
0x4D5E41: push    ebx
0x4D5E42: push    ebp
0x4D5E43: push    esi
0x4D5E44: push    edi
0x4D5E45: mov     eax, ds:0B30AACh
0x4D5E4A: xor     eax, esp
0x4D5E4C: push    eax
0x4D5E4D: lea     eax, [esp+40h+var_C]
0x4D5E51: mov     large fs:0, eax
0x4D5E57: mov     ebx, [esp+40h+a2]
0x4D5E5B: xor     esi, esi
0x4D5E5D: cmp     ebx, esi
0x4D5E5F: jz      short loc_4D5E6C
0x4D5E61: push    ebx; a2
0x4D5E62: mov     ecx, offset stru_B35C80; this
0x4D5E67: call    sub_496EA0
0x4D5E6C: test    byte ptr ds:0B35E48h, 1
0x4D5E73: jnz     short loc_4D5EA5
0x4D5E75: or      dword ptr ds:0B35E48h, 1
0x4D5E7C: push    offset sub_A1BC20; void (__cdecl *)()
0x4D5E81: mov     ds:0B35E44h, esi
0x4D5E87: mov     ds:0B35E3Ch, esi
0x4D5E8D: mov     ds:0B35E40h, esi
0x4D5E93: mov     dword ptr ds:0B35E38h, offset ??_7?$NiTList@PAVTESObjectCELL@@@@6B@; const NiTList<TESObjectCELL *>::`vftable'
0x4D5E9D: call    _atexit
0x4D5EA2: add     esp, 4
0x4D5EA5: mov     eax, 2
0x4D5EAA: test    ds:0B35E48h, al
0x4D5EB0: jnz     short loc_4D5EB8
0x4D5EB2: or      ds:0B35E48h, eax
0x4D5EB8: cmp     ds:0B35E34h, esi
0x4D5EBE: mov     [esp+40h+var_29], 0
0x4D5EC3: jnz     short loc_4D5EF9
0x4D5EC5: mov     eax, ds:0B3F9A8h
0x4D5ECA: fld     dword ptr ds:0A32048h
0x4D5ED0: mov     ecx, ds:0B3F9ACh
0x4D5ED6: fstp    dword ptr ds:0B097B4h
0x4D5EDC: mov     edx, ds:0B3F9B0h
0x4D5EE2: mov     ds:0B35E28h, eax
0x4D5EE7: mov     ds:0B35E2Ch, ecx
0x4D5EED: mov     ds:0B35E30h, edx
0x4D5EF3: mov     ds:0B35E24h, esi
0x4D5EF9: cmp     ebx, esi
0x4D5EFB: jz      loc_4D61F4
0x4D5F01: mov     ebp, [esp+40h+arg_14]
0x4D5F05: cmp     ebp, esi
0x4D5F07: jz      loc_4D61F4
0x4D5F0D: add     dword ptr ds:0B35E34h, 1
0x4D5F14: lea     eax, [esp+40h+a2]
0x4D5F18: push    eax
0x4D5F19: mov     ecx, offset dword_B35E38
0x4D5F1E: call    sub_5B1E20
0x4D5F23: xor     edi, edi
0x4D5F25: mov     [esp+40h+var_10], esi
0x4D5F29: mov     [esp+40h+var_18], edi
0x4D5F2D: mov     [esp+40h+var_14], esi
0x4D5F31: mov     [esp+40h+var_1C], offset ??_7?$NiTList@PAVTESObjectREFR@@@@6B@; const NiTList<TESObjectREFR *>::`vftable'
0x4D5F39: fld     [esp+40h+arg_8]
0x4D5F3D: add     ebx, 48h ; 'H'
0x4D5F40: cmp     ebx, esi
0x4D5F42: mov     [esp+40h+var_4], esi
0x4D5F46: jz      loc_4D61CC
0x4D5F4C: lea     esp, [esp+0]
0x4D5F50: cmp     [esp+40h+var_29], 0
0x4D5F55: jnz     loc_4D61C6
0x4D5F5B: mov     esi, [ebx]
0x4D5F5D: test    esi, esi
0x4D5F5F: mov     ebx, [ebx+4]
0x4D5F62: mov     dword ptr [esp+40h+var_24], esi
0x4D5F66: jz      loc_4D61B4
0x4D5F6C: fcom    qword ptr ds:0A3A5B0h
0x4D5F72: fnstsw  ax
0x4D5F74: test    ah, 44h
0x4D5F77: jnp     short loc_4D5FA1
0x4D5F79: mov     edx, [esi]
0x4D5F7B: mov     eax, [edx+174h]
0x4D5F81: push    ecx
0x4D5F82: mov     ecx, [esp+44h+arg_4]
0x4D5F86: fstp    [esp+44h+var_44]; float
0x4D5F89: push    ecx; int
0x4D5F8A: mov     ecx, esi
0x4D5F8C: call    eax
0x4D5F8E: push    eax; int
0x4D5F8F: call    sub_480520
0x4D5F94: add     esp, 0Ch
0x4D5F97: test    eax, eax
0x4D5F99: jge     loc_4D61B6
0x4D5F9F: jmp     short loc_4D5FA3
0x4D5FA1: fstp    st
0x4D5FA3: fld     [esp+40h+arg_10]
0x4D5FA7: fcom    qword ptr ds:0A3A5B0h
0x4D5FAD: fnstsw  ax
0x4D5FAF: test    ah, 44h
0x4D5FB2: jnp     short loc_4D5FFF
0x4D5FB4: fld     [esp+40h+arg_8]
0x4D5FB8: fucompp
0x4D5FBA: fnstsw  ax
0x4D5FBC: test    ah, 44h
0x4D5FBF: jp      short loc_4D5FD3
0x4D5FC1: mov     ecx, [esp+40h+arg_C]
0x4D5FC5: push    ecx
0x4D5FC6: mov     ecx, [esp+44h+arg_4]
0x4D5FCA: call    sub_8AA350
0x4D5FCF: test    al, al
0x4D5FD1: jnz     short loc_4D6001
0x4D5FD3: fld     [esp+40h+arg_10]
0x4D5FD7: mov     edx, [esp+40h+arg_C]
0x4D5FDB: mov     eax, [esi]
0x4D5FDD: push    ecx
0x4D5FDE: fstp    [esp+44h+var_44]; float
0x4D5FE1: push    edx; int
0x4D5FE2: mov     edx, [eax+174h]
0x4D5FE8: mov     ecx, esi
0x4D5FEA: call    edx
0x4D5FEC: push    eax; int
0x4D5FED: call    sub_480520
0x4D5FF2: add     esp, 0Ch
0x4D5FF5: test    eax, eax
0x4D5FF7: jge     loc_4D61B6
0x4D5FFD: jmp     short loc_4D6001
0x4D5FFF: fstp    st
0x4D6001: mov     eax, [esp+40h+arg_18]
0x4D6005: push    eax
0x4D6006: push    esi
0x4D6007: call    ebp
0x4D6009: add     esp, 8
0x4D600C: test    al, al
0x4D600E: jz      short loc_4D6015
0x4D6010: mov     [esp+40h+var_29], 1
0x4D6015: mov     edx, [esi]
0x4D6017: mov     eax, [edx+170h]
0x4D601D: mov     ecx, esi
0x4D601F: call    eax
0x4D6021: cmp     byte ptr [eax+4], 18h
0x4D6025: jnz     loc_4D61B6
0x4D602B: mov     edx, [esi]
0x4D602D: mov     eax, [edx+170h]
0x4D6033: mov     ecx, esi
0x4D6035: call    eax
0x4D6037: cmp     eax, ds:0B35EBCh
0x4D603D: jz      loc_4D61B6
0x4D6043: mov     ecx, esi; this
0x4D6045: call    GetTeleportExtraData
0x4D604A: mov     edi, eax
0x4D604C: test    edi, edi
0x4D604E: jz      loc_4D61B6
0x4D6054: mov     ecx, edi
0x4D6056: call    sub_42B470
0x4D605B: mov     ecx, edi
0x4D605D: mov     ebp, eax
0x4D605F: call    sub_42B460
0x4D6064: test    eax, eax
0x4D6066: jz      short loc_4D6070
0x4D6068: test    byte ptr [eax+24h], 1
0x4D606C: jnz     short loc_4D6070
0x4D606E: xor     eax, eax
0x4D6070: test    ebp, ebp
0x4D6072: jz      loc_4D616F
0x4D6078: fld     dword ptr ds:0A32048h
0x4D607E: fstp    [esp+40h+var_28]
0x4D6082: fld     [esp+40h+arg_8]
0x4D6086: fld     st
0x4D6088: fld     qword ptr ds:0A3A5B0h
0x4D608E: fucom   st(1)
0x4D6090: fnstsw  ax
0x4D6092: fstp    st(1)
0x4D6094: test    ah, 44h
0x4D6097: jnp     short loc_4D60CE
0x4D6099: mov     ecx, [esp+40h+arg_4]
0x4D609D: fstp    st
0x4D609F: push    ecx
0x4D60A0: fstp    [esp+44h+var_24]
0x4D60A4: mov     ecx, esi
0x4D60A6: call    sub_4D7E30
0x4D60AB: fsubr   [esp+40h+var_24]
0x4D60AF: fstp    dword ptr [esp+40h+var_24]
0x4D60B3: fld     dword ptr [esp+40h+var_24]
0x4D60B7: fld     qword ptr ds:0A3A5B0h
0x4D60BD: fcom    st(1)
0x4D60BF: fnstsw  ax
0x4D60C1: test    ah, 41h
0x4D60C4: jnz     short loc_4D60CE
0x4D60C6: fxch    st(1)
0x4D60C8: fstp    [esp+40h+var_28]
0x4D60CC: jmp     short loc_4D60D0
0x4D60CE: fstp    st(1)
0x4D60D0: fld     [esp+40h+arg_10]
0x4D60D4: fld     st
0x4D60D6: fucomp  st(2)
0x4D60D8: fnstsw  ax
0x4D60DA: fstp    st(1)
0x4D60DC: test    ah, 44h
0x4D60DF: jnp     short loc_4D611F
0x4D60E1: fld     st
0x4D60E3: fld     [esp+40h+arg_8]
0x4D60E7: fucompp
0x4D60E9: fnstsw  ax
0x4D60EB: test    ah, 44h
0x4D60EE: jnp     short loc_4D611F
0x4D60F0: mov     edx, [esp+40h+arg_C]
0x4D60F4: fstp    [esp+40h+var_24]
0x4D60F8: push    edx
0x4D60F9: mov     ecx, esi
0x4D60FB: call    sub_4D7E30
0x4D6100: fsubr   [esp+40h+var_24]
0x4D6104: fstp    dword ptr [esp+40h+var_24]
0x4D6108: fld     dword ptr [esp+40h+var_24]
0x4D610C: fld     [esp+40h+var_28]
0x4D6110: fcomp   st(1)
0x4D6112: fnstsw  ax
0x4D6114: test    ah, 41h
0x4D6117: jnz     short loc_4D611F
0x4D6119: fstp    [esp+40h+var_28]
0x4D611D: jmp     short loc_4D6121
0x4D611F: fstp    st
0x4D6121: cmp     dword ptr ds:0B35E24h, 0
0x4D6128: jz      short loc_4D613D
0x4D612A: fld     [esp+40h+var_28]
0x4D612E: fld     dword ptr ds:0B097B4h
0x4D6134: fcompp
0x4D6136: fnstsw  ax
0x4D6138: test    ah, 5
0x4D613B: jp      short loc_4D61B6
0x4D613D: fld     [esp+40h+var_28]
0x4D6141: mov     ecx, edi
0x4D6143: fstp    dword ptr ds:0B097B4h
0x4D6149: call    sub_6899C0
0x4D614E: mov     ecx, [eax]
0x4D6150: mov     ds:0B35E28h, ecx
0x4D6156: mov     edx, [eax+4]
0x4D6159: mov     ds:0B35E2Ch, edx
0x4D615F: mov     eax, [eax+8]
0x4D6162: mov     ds:0B35E30h, eax
0x4D6167: mov     ds:0B35E24h, ebp
0x4D616D: jmp     short loc_4D61B6
0x4D616F: test    eax, eax
0x4D6171: jz      short loc_4D61B6
0x4D6173: mov     ecx, ds:0B35E3Ch
0x4D6179: test    ecx, ecx
0x4D617B: jz      short loc_4D61A4
0x4D617D: lea     ecx, [ecx+0]
0x4D6180: cmp     eax, [ecx+8]
0x4D6183: lea     edx, [ecx+8]
0x4D6186: mov     esi, ecx
0x4D6188: mov     ecx, [ecx]
0x4D618A: jz      short loc_4D61A0
0x4D618C: test    ecx, ecx
0x4D618E: jnz     short loc_4D6180
0x4D6190: lea     ecx, [esp+40h+var_24]
0x4D6194: push    ecx
0x4D6195: lea     ecx, [esp+44h+var_1C]
0x4D6199: call    sub_5B1E20
0x4D619E: jmp     short loc_4D61B6
0x4D61A0: test    esi, esi
0x4D61A2: jnz     short loc_4D61B6
0x4D61A4: lea     ecx, [esp+40h+var_24]
0x4D61A8: push    ecx
0x4D61A9: lea     ecx, [esp+44h+var_1C]
0x4D61AD: call    sub_5B1E20
0x4D61B2: jmp     short loc_4D61B6
0x4D61B4: fstp    st
0x4D61B6: test    ebx, ebx
0x4D61B8: fld     [esp+40h+arg_8]
0x4D61BC: mov     ebp, [esp+40h+arg_14]
0x4D61C0: jnz     loc_4D5F50
0x4D61C6: mov     edi, [esp+40h+var_18]
0x4D61CA: xor     esi, esi
0x4D61CC: cmp     edi, esi
0x4D61CE: jnz     loc_4D6284
0x4D61D4: fstp    st
0x4D61D6: sub     dword ptr ds:0B35E34h, 1
0x4D61DD: lea     ecx, [esp+40h+var_1C]
0x4D61E1: mov     [esp+40h+var_4], 0FFFFFFFFh
0x4D61E9: call    ??1?$NiTList@PAVTESObjectREFR@@@@UAE@XZ; NiTList<TESObjectREFR *>::~NiTList<TESObjectREFR *>(void)
0x4D61EE: mov     ebx, [esp+40h+a2]
0x4D61F2: xor     esi, esi
0x4D61F4: cmp     ds:0B35E34h, esi
0x4D61FA: jnz     short loc_4D6249
0x4D61FC: mov     ecx, offset dword_B35E38
0x4D6201: call    NiTPointerList__FreeAllNodes
0x4D6206: cmp     [esp+40h+var_29], 0
0x4D620B: jnz     short loc_4D6249
0x4D620D: mov     ecx, ds:0B35E24h
0x4D6213: cmp     ecx, esi
0x4D6215: jz      short loc_4D6249
0x4D6217: mov     eax, [esp+40h+arg_18]
0x4D621B: fld     dword ptr ds:0A32048h
0x4D6221: mov     edx, [esp+40h+arg_14]
0x4D6225: push    eax; int
0x4D6226: mov     eax, [esp+44h+arg_C]
0x4D622A: push    edx; int
0x4D622B: push    ecx
0x4D622C: fstp    [esp+4Ch+var_4C]; float
0x4D622F: push    eax; int
0x4D6230: fld     dword ptr ds:0B097B4h
0x4D6236: push    ecx
0x4D6237: fstp    [esp+54h+var_54]; float
0x4D623A: push    offset qword_B35E28; int
0x4D623F: call    sub_4F0750
0x4D6244: mov     [esp+40h+var_29], 1
0x4D6249: cmp     ebx, esi
0x4D624B: jz      short loc_4D6258
0x4D624D: push    ebx; a2
0x4D624E: mov     ecx, offset stru_B35C80; this
0x4D6253: call    sub_496F50
0x4D6258: xor     eax, eax
0x4D625A: cmp     [esp+40h+var_29], al
0x4D625E: setz    al
0x4D6261: mov     ecx, [esp+40h+var_C]
0x4D6265: mov     large fs:0, ecx
0x4D626C: pop     ecx
0x4D626D: pop     edi
0x4D626E: pop     esi
0x4D626F: pop     ebp
0x4D6270: pop     ebx
0x4D6271: add     esp, 2Ch
0x4D6274: retn
0x4D6275: jmp     short loc_4D6280
0x4D6277: align 10h
0x4D6280: fld     [esp+40h+arg_8]
0x4D6284: cmp     [esp+40h+var_29], 0
0x4D6289: jnz     loc_4D61D4
0x4D628F: mov     esi, [edi+8]
0x4D6292: test    esi, esi
0x4D6294: lea     eax, [edi+8]
0x4D6297: mov     edi, [edi]
0x4D6299: jz      loc_4D638D
0x4D629F: fld     dword ptr ds:0A32048h
0x4D62A5: fstp    [esp+40h+var_28]
0x4D62A9: fld     st
0x4D62AB: fld     qword ptr ds:0A3A5B0h
0x4D62B1: fucom   st(1)
0x4D62B3: fnstsw  ax
0x4D62B5: fstp    st(1)
0x4D62B7: test    ah, 44h
0x4D62BA: jnp     short loc_4D62F1
0x4D62BC: mov     edx, [esp+40h+arg_4]
0x4D62C0: fstp    st
0x4D62C2: push    edx
0x4D62C3: fstp    [esp+44h+var_24]
0x4D62C7: mov     ecx, esi
0x4D62C9: call    sub_4D7E30
0x4D62CE: fsubr   [esp+40h+var_24]
0x4D62D2: fstp    dword ptr [esp+40h+var_24]
0x4D62D6: fld     dword ptr [esp+40h+var_24]
0x4D62DA: fld     qword ptr ds:0A3A5B0h
0x4D62E0: fcom    st(1)
0x4D62E2: fnstsw  ax
0x4D62E4: test    ah, 41h
0x4D62E7: jnz     short loc_4D62F1
0x4D62E9: fxch    st(1)
0x4D62EB: fstp    [esp+40h+var_28]
0x4D62EF: jmp     short loc_4D62F3
0x4D62F1: fstp    st(1)
0x4D62F3: fld     [esp+40h+arg_10]
0x4D62F7: fld     st
0x4D62F9: fucomp  st(2)
0x4D62FB: fnstsw  ax
0x4D62FD: fstp    st(1)
0x4D62FF: test    ah, 44h
0x4D6302: jnp     short loc_4D6342
0x4D6304: fld     st
0x4D6306: fld     [esp+40h+arg_8]
0x4D630A: fucompp
0x4D630C: fnstsw  ax
0x4D630E: test    ah, 44h
0x4D6311: jnp     short loc_4D6342
0x4D6313: mov     eax, [esp+40h+arg_C]
0x4D6317: fstp    [esp+40h+var_24]
0x4D631B: push    eax
0x4D631C: mov     ecx, esi
0x4D631E: call    sub_4D7E30
0x4D6323: fsubr   [esp+40h+var_24]
0x4D6327: fstp    dword ptr [esp+40h+var_24]
0x4D632B: fld     dword ptr [esp+40h+var_24]
0x4D632F: fld     [esp+40h+var_28]
0x4D6333: fcomp   st(1)
0x4D6335: fnstsw  ax
0x4D6337: test    ah, 41h
0x4D633A: jnz     short loc_4D6342
0x4D633C: fstp    [esp+40h+var_28]
0x4D6340: jmp     short loc_4D6344
0x4D6342: fstp    st
0x4D6344: mov     ecx, esi; this
0x4D6346: call    GetTeleportExtraData
0x4D634B: fld     dword ptr ds:0A32048h
0x4D6351: mov     ecx, [esp+40h+arg_18]
0x4D6355: mov     edx, [esp+40h+arg_C]
0x4D6359: push    ecx; int
0x4D635A: push    ebp; int
0x4D635B: push    ecx
0x4D635C: fstp    [esp+4Ch+var_4C]; float
0x4D635F: push    edx; int
0x4D6360: fld     [esp+50h+var_28]
0x4D6364: mov     esi, eax
0x4D6366: push    ecx
0x4D6367: mov     ecx, esi
0x4D6369: fstp    [esp+54h+var_54]; float
0x4D636C: call    sub_6899C0
0x4D6371: push    eax; int
0x4D6372: mov     ecx, esi
0x4D6374: call    sub_42B460
0x4D6379: push    eax; int
0x4D637A: call    sub_4D5E30
0x4D637F: add     esp, 1Ch
0x4D6382: test    al, al
0x4D6384: jnz     short loc_4D638F
0x4D6386: mov     [esp+40h+var_29], 1
0x4D638B: jmp     short loc_4D638F
0x4D638D: fstp    st
0x4D638F: test    edi, edi
0x4D6391: jnz     loc_4D6280
0x4D6397: jmp     loc_4D61D6
