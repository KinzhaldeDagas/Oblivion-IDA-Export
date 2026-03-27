0x5E3920: sub     esp, 10h
0x5E3923: push    esi
0x5E3924: mov     esi, ecx
0x5E3926: mov     eax, [esi]
0x5E3928: mov     edx, [eax+25Ch]
0x5E392E: call    edx
0x5E3930: test    al, al
0x5E3932: jz      short loc_5E393B
0x5E3934: fldz
0x5E3936: pop     esi
0x5E3937: add     esp, 10h
0x5E393A: retn
0x5E393B: mov     ecx, [esi+58h]
0x5E393E: mov     eax, [ecx]
0x5E3940: mov     edx, [eax+304h]
0x5E3946: call    edx
0x5E3948: test    al, al
0x5E394A: setz    al
0x5E394D: mov     ecx, esi
0x5E394F: mov     [esp+14h+var_8], al
0x5E3953: call    Actor_CalcCurrentEncumberance?
0x5E3958: fstp    [esp+14h+var_4]
0x5E395C: mov     edx, [esi]
0x5E395E: mov     eax, [edx+170h]
0x5E3964: mov     ecx, esi
0x5E3966: call    eax
0x5E3968: cmp     byte ptr [eax+4], 23h ; '#'
0x5E396C: mov     edx, [esi]
0x5E396E: mov     eax, [edx+284h]
0x5E3974: setz    cl
0x5E3977: mov     byte ptr [esp+14h+var_10], cl
0x5E397B: push    36h ; '6'
0x5E397D: mov     ecx, esi
0x5E397F: call    eax
0x5E3981: mov     edx, [esi]
0x5E3983: mov     [esp+14h+var_C], eax
0x5E3987: fild    [esp+14h+var_C]
0x5E398B: mov     eax, [edx+284h]
0x5E3991: push    ecx
0x5E3992: mov     ecx, esi
0x5E3994: fstp    [esp+18h+var_18]
0x5E3997: push    0Dh
0x5E3999: call    eax
0x5E399B: mov     edx, [esp+14h+var_4]
0x5E399F: push    ecx
0x5E39A0: mov     ecx, [esp+18h+var_C]
0x5E39A4: mov     dword ptr [esp+18h+var_8], eax
0x5E39A8: fild    dword ptr [esp+18h+var_8]
0x5E39AC: mov     eax, [esi]
0x5E39AE: fstp    [esp+18h+var_18]; float
0x5E39B1: push    ecx; float
0x5E39B2: fld     dword ptr [esp+1Ch]
0x5E39B6: push    edx; int
0x5E39B7: mov     edx, [eax+284h]
0x5E39BD: push    ecx
0x5E39BE: fstp    [esp+24h+var_24]; int
0x5E39C1: push    4; float
0x5E39C3: mov     ecx, esi
0x5E39C5: call    edx
0x5E39C7: mov     [esp+28h+var_4], eax
0x5E39CB: fild    [esp+28h+var_4]
0x5E39CF: push    ecx
0x5E39D0: fstp    [esp+2Ch+var_2C]; float
0x5E39D3: call    Calc_SwimSpeed
0x5E39D8: add     esp, 18h
0x5E39DB: fstp    [esp+14h+var_C]
0x5E39DF: cmp     dword ptr [esi+58h], 0
0x5E39E3: jz      loc_5E3AC1
0x5E39E9: mov     ecx, [esi+58h]
0x5E39EC: mov     eax, [ecx]
0x5E39EE: mov     edx, [eax+184h]
0x5E39F4: call    edx
0x5E39F6: test    eax, eax
0x5E39F8: jz      loc_5E3AC1
0x5E39FE: cmp     byte ptr [eax+20h], 1
0x5E3A02: jnz     loc_5E3AC1
0x5E3A08: mov     eax, [esi+58h]
0x5E3A0B: test    eax, eax
0x5E3A0D: jz      loc_5E3AC1
0x5E3A13: mov     eax, [eax+8]
0x5E3A16: test    eax, eax
0x5E3A18: jz      loc_5E3AC1
0x5E3A1E: mov     ecx, [eax+28h]
0x5E3A21: test    ecx, ecx
0x5E3A23: jz      loc_5E3AC1
0x5E3A29: push    edi
0x5E3A2A: call    sub_569E60
0x5E3A2F: mov     edi, eax
0x5E3A31: test    edi, edi
0x5E3A33: jz      loc_5E3AC0
0x5E3A39: cmp     edi, ds:0B333C4h
0x5E3A3F: jz      short loc_5E3AC0
0x5E3A41: mov     eax, [edi]
0x5E3A43: mov     edx, [eax+190h]
0x5E3A49: mov     ecx, edi
0x5E3A4B: call    edx
0x5E3A4D: test    al, al
0x5E3A4F: jz      short loc_5E3AC0
0x5E3A51: cmp     dword ptr [edi+58h], 0
0x5E3A55: jz      short loc_5E3AC0
0x5E3A57: mov     ecx, edi
0x5E3A59: call    sub_5E3920
0x5E3A5E: fstp    [esp+18h+var_10]
0x5E3A62: fldz
0x5E3A64: fcomp   [esp+18h+var_10]
0x5E3A68: fnstsw  ax
0x5E3A6A: test    ah, 5
0x5E3A6D: jp      short loc_5E3AC0
0x5E3A6F: push    0
0x5E3A71: push    edi
0x5E3A72: mov     ecx, esi
0x5E3A74: call    TesObjectREF_GetDistance
0x5E3A79: fcomp   dword ptr ds:0A44BA4h
0x5E3A7F: fnstsw  ax
0x5E3A81: test    ah, 5
0x5E3A84: jp      short loc_5E3A94
0x5E3A86: fld     [esp+18h+var_10]
0x5E3A8A: fsub    qword ptr ds:0A3F3D0h
0x5E3A90: fstp    [esp+18h+var_10]
0x5E3A94: fld     [esp+18h+var_10]
0x5E3A98: fldz
0x5E3A9A: fcomp   st(1)
0x5E3A9C: fnstsw  ax
0x5E3A9E: test    ah, 5
0x5E3AA1: jp      short loc_5E3ABE
0x5E3AA3: fld     [esp+18h+var_C]
0x5E3AA7: fcomp   st(1)
0x5E3AA9: fnstsw  ax
0x5E3AAB: test    ah, 5
0x5E3AAE: jnp     short loc_5E3ABE
0x5E3AB0: fstp    [esp+18h+var_C]
0x5E3AB4: pop     edi
0x5E3AB5: fld     [esp+14h+var_C]
0x5E3AB9: pop     esi
0x5E3ABA: add     esp, 10h
0x5E3ABD: retn
0x5E3ABE: fstp    st
0x5E3AC0: pop     edi
0x5E3AC1: fld     [esp+14h+var_C]
0x5E3AC5: pop     esi
0x5E3AC6: add     esp, 10h
0x5E3AC9: retn
