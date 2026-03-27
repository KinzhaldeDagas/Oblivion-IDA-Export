0x8C8230: push    ecx
0x8C8231: push    esi
0x8C8232: mov     esi, ecx
0x8C8234: mov     eax, [esi]
0x8C8236: mov     edx, [eax+74h]
0x8C8239: lea     ecx, [esp+8+var_1]
0x8C823D: push    ecx
0x8C823E: mov     ecx, esi
0x8C8240: call    edx
0x8C8242: mov     edx, [esp+8+arg_4]
0x8C8246: mov     ecx, eax
0x8C8248: test    ecx, ecx
0x8C824A: jz      short loc_8C82BE
0x8C824C: fld     dword ptr [edx+10h]
0x8C824F: fstp    [esp+8+arg_4]
0x8C8253: fld1
0x8C8255: fld     [esp+8+arg_4]
0x8C8259: fucom   st(1)
0x8C825B: fnstsw  ax
0x8C825D: fstp    st(1)
0x8C825F: test    ah, 44h
0x8C8262: jnp     short loc_8C82BC
0x8C8264: fld     dword ptr [ecx+10h]
0x8C8267: mov     eax, [esp+8+arg_0]
0x8C826B: fmul    st, st(1)
0x8C826D: push    edx
0x8C826E: push    eax
0x8C826F: fstp    dword ptr [ecx+10h]
0x8C8272: fld     dword ptr [ecx+14h]
0x8C8275: fmul    st, st(1)
0x8C8277: fstp    dword ptr [ecx+14h]
0x8C827A: fld     dword ptr [ecx+18h]
0x8C827D: fmul    st, st(1)
0x8C827F: fstp    dword ptr [ecx+18h]
0x8C8282: fld     dword ptr [ecx+1Ch]
0x8C8285: fmul    st, st(1)
0x8C8287: fstp    dword ptr [ecx+1Ch]
0x8C828A: fld     st
0x8C828C: fmul    dword ptr [ecx+20h]
0x8C828F: fstp    dword ptr [ecx+20h]
0x8C8292: fld     dword ptr [ecx+24h]
0x8C8295: fmul    st, st(1)
0x8C8297: fstp    dword ptr [ecx+24h]
0x8C829A: fld     dword ptr [ecx+28h]
0x8C829D: fmul    st, st(1)
0x8C829F: fstp    dword ptr [ecx+28h]
0x8C82A2: fld     dword ptr [ecx+2Ch]
0x8C82A5: fmul    st, st(1)
0x8C82A7: fstp    dword ptr [ecx+2Ch]
0x8C82AA: fmul    dword ptr [ecx+30h]
0x8C82AD: fstp    dword ptr [ecx+30h]
0x8C82B0: mov     ecx, esi
0x8C82B2: call    sub_8A2670
0x8C82B7: pop     esi
0x8C82B8: pop     ecx
0x8C82B9: retn    8
0x8C82BC: fstp    st
0x8C82BE: mov     eax, [esp+8+arg_0]
0x8C82C2: push    edx
0x8C82C3: push    eax
0x8C82C4: mov     ecx, esi
0x8C82C6: call    sub_8A2670
0x8C82CB: pop     esi
0x8C82CC: pop     ecx
0x8C82CD: retn    8
