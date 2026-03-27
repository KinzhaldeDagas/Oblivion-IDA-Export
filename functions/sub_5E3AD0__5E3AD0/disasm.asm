0x5E3AD0: sub     esp, 10h
0x5E3AD3: push    esi
0x5E3AD4: mov     esi, ecx
0x5E3AD6: mov     eax, [esi]
0x5E3AD8: mov     edx, [eax+25Ch]
0x5E3ADE: call    edx
0x5E3AE0: test    al, al
0x5E3AE2: jz      short loc_5E3AEB
0x5E3AE4: fldz
0x5E3AE6: pop     esi
0x5E3AE7: add     esp, 10h
0x5E3AEA: retn
0x5E3AEB: mov     ecx, [esi+58h]
0x5E3AEE: mov     eax, [ecx]
0x5E3AF0: mov     edx, [eax+304h]
0x5E3AF6: call    edx
0x5E3AF8: test    al, al
0x5E3AFA: setz    al
0x5E3AFD: mov     ecx, esi
0x5E3AFF: mov     [esp+14h+var_8], al
0x5E3B03: call    Actor_CalcCurrentEncumberance?
0x5E3B08: fstp    [esp+14h+var_4]
0x5E3B0C: mov     edx, [esi]
0x5E3B0E: mov     eax, [edx+170h]
0x5E3B14: mov     ecx, esi
0x5E3B16: call    eax
0x5E3B18: cmp     byte ptr [eax+4], 23h ; '#'
0x5E3B1C: mov     edx, [esi]
0x5E3B1E: mov     eax, [edx+284h]
0x5E3B24: setz    cl
0x5E3B27: mov     byte ptr [esp+14h+var_10], cl
0x5E3B2B: push    36h ; '6'
0x5E3B2D: mov     ecx, esi
0x5E3B2F: call    eax
0x5E3B31: mov     edx, [esi]
0x5E3B33: mov     [esp+14h+var_C], eax
0x5E3B37: fild    [esp+14h+var_C]
0x5E3B3B: mov     eax, [edx+284h]
0x5E3B41: push    ecx
0x5E3B42: mov     ecx, esi
0x5E3B44: fstp    [esp+18h+var_18]
0x5E3B47: push    0Dh
0x5E3B49: call    eax
0x5E3B4B: mov     edx, [esp+14h+var_4]
0x5E3B4F: push    ecx
0x5E3B50: mov     ecx, [esp+18h+var_C]
0x5E3B54: mov     dword ptr [esp+18h+var_8], eax
0x5E3B58: fild    dword ptr [esp+18h+var_8]
0x5E3B5C: mov     eax, [esi]
0x5E3B5E: fstp    [esp+18h+var_18]; float
0x5E3B61: push    ecx; float
0x5E3B62: fld     dword ptr [esp+1Ch]
0x5E3B66: push    edx; int
0x5E3B67: mov     edx, [eax+284h]
0x5E3B6D: push    ecx
0x5E3B6E: fstp    [esp+24h+var_24]; int
0x5E3B71: push    4; float
0x5E3B73: mov     ecx, esi
0x5E3B75: call    edx
0x5E3B77: mov     [esp+28h+var_4], eax
0x5E3B7B: fild    [esp+28h+var_4]
0x5E3B7F: push    ecx
0x5E3B80: fstp    [esp+2Ch+var_2C]; float
0x5E3B83: call    Calc_SwimRunSpeed
0x5E3B88: add     esp, 18h
0x5E3B8B: fstp    [esp+14h+var_C]
0x5E3B8F: cmp     dword ptr [esi+58h], 0
0x5E3B93: jz      loc_5E3C71
0x5E3B99: mov     ecx, [esi+58h]
0x5E3B9C: mov     eax, [ecx]
0x5E3B9E: mov     edx, [eax+184h]
0x5E3BA4: call    edx
0x5E3BA6: test    eax, eax
0x5E3BA8: jz      loc_5E3C71
0x5E3BAE: cmp     byte ptr [eax+20h], 1
0x5E3BB2: jnz     loc_5E3C71
0x5E3BB8: mov     eax, [esi+58h]
0x5E3BBB: test    eax, eax
0x5E3BBD: jz      loc_5E3C71
0x5E3BC3: mov     eax, [eax+8]
0x5E3BC6: test    eax, eax
0x5E3BC8: jz      loc_5E3C71
0x5E3BCE: mov     ecx, [eax+28h]
0x5E3BD1: test    ecx, ecx
0x5E3BD3: jz      loc_5E3C71
0x5E3BD9: push    edi
0x5E3BDA: call    sub_569E60
0x5E3BDF: mov     edi, eax
0x5E3BE1: test    edi, edi
0x5E3BE3: jz      loc_5E3C70
0x5E3BE9: cmp     edi, ds:0B333C4h
0x5E3BEF: jz      short loc_5E3C70
0x5E3BF1: mov     eax, [edi]
0x5E3BF3: mov     edx, [eax+190h]
0x5E3BF9: mov     ecx, edi
0x5E3BFB: call    edx
0x5E3BFD: test    al, al
0x5E3BFF: jz      short loc_5E3C70
0x5E3C01: cmp     dword ptr [edi+58h], 0
0x5E3C05: jz      short loc_5E3C70
0x5E3C07: mov     ecx, edi
0x5E3C09: call    sub_5E3AD0
0x5E3C0E: fstp    [esp+18h+var_10]
0x5E3C12: fldz
0x5E3C14: fcomp   [esp+18h+var_10]
0x5E3C18: fnstsw  ax
0x5E3C1A: test    ah, 5
0x5E3C1D: jp      short loc_5E3C70
0x5E3C1F: push    0
0x5E3C21: push    edi
0x5E3C22: mov     ecx, esi
0x5E3C24: call    TesObjectREF_GetDistance
0x5E3C29: fcomp   dword ptr ds:0A44BA4h
0x5E3C2F: fnstsw  ax
0x5E3C31: test    ah, 5
0x5E3C34: jp      short loc_5E3C44
0x5E3C36: fld     [esp+18h+var_10]
0x5E3C3A: fsub    qword ptr ds:0A3F3D0h
0x5E3C40: fstp    [esp+18h+var_10]
0x5E3C44: fld     [esp+18h+var_10]
0x5E3C48: fldz
0x5E3C4A: fcomp   st(1)
0x5E3C4C: fnstsw  ax
0x5E3C4E: test    ah, 5
0x5E3C51: jp      short loc_5E3C6E
0x5E3C53: fld     [esp+18h+var_C]
0x5E3C57: fcomp   st(1)
0x5E3C59: fnstsw  ax
0x5E3C5B: test    ah, 5
0x5E3C5E: jnp     short loc_5E3C6E
0x5E3C60: fstp    [esp+18h+var_C]
0x5E3C64: pop     edi
0x5E3C65: fld     [esp+14h+var_C]
0x5E3C69: pop     esi
0x5E3C6A: add     esp, 10h
0x5E3C6D: retn
0x5E3C6E: fstp    st
0x5E3C70: pop     edi
0x5E3C71: fld     [esp+14h+var_C]
0x5E3C75: pop     esi
0x5E3C76: add     esp, 10h
0x5E3C79: retn
