0x608280: push    ecx
0x608281: push    esi
0x608282: mov     esi, [esp+8+arg_0]
0x608286: mov     eax, [esi]
0x608288: mov     edx, [eax+284h]
0x60828E: push    7
0x608290: mov     ecx, esi
0x608292: call    edx
0x608294: push    eax
0x608295: mov     eax, [esi]
0x608297: mov     edx, [eax+284h]
0x60829D: push    1Ch; int
0x60829F: mov     ecx, esi
0x6082A1: call    edx
0x6082A3: mov     [esp+10h], eax
0x6082A7: fild    dword ptr [esp+10h]
0x6082AB: sub     esp, 8
0x6082AE: fstp    [esp+18h+var_14]; float
0x6082B2: fld1
0x6082B4: fstp    [esp+18h+var_18]; float
0x6082B7: call    sub_547700
0x6082BC: fstp    [esp+18h+var_8]
0x6082C0: fld1
0x6082C2: add     esp, 0Ch
0x6082C5: mov     ecx, esi; this
0x6082C7: fstp    dword ptr [esp+0Ch]
0x6082CB: call    MobileObject_GetCharProxy
0x6082D0: mov     edx, [eax]
0x6082D2: mov     ecx, eax
0x6082D4: mov     eax, [edx+58h]
0x6082D7: call    eax
0x6082D9: test    eax, eax
0x6082DB: jz      short loc_608306
0x6082DD: mov     ecx, esi; this
0x6082DF: call    MobileObject_GetCharProxy
0x6082E4: mov     edx, [eax]
0x6082E6: mov     ecx, eax
0x6082E8: mov     eax, [edx+58h]
0x6082EB: call    eax
0x6082ED: fld     dword ptr [eax+28h]
0x6082F0: fmul    qword ptr ds:0A372E0h
0x6082F6: fstp    [esp+8+arg_0]
0x6082FA: fld     [esp+8+arg_0]
0x6082FE: fmul    [esp+8+var_4]
0x608302: fstp    [esp+8+arg_0]
0x608306: fld     [esp+8+arg_0]
0x60830A: pop     esi
0x60830B: pop     ecx
0x60830C: retn
