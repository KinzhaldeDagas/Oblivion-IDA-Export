0x686150: sub     esp, 10h
0x686153: push    ebx
0x686154: push    ebp
0x686155: mov     ebp, ecx
0x686157: push    esi
0x686158: lea     ecx, [ebp+14h]
0x68615B: call    sub_42B410
0x686160: mov     esi, [esp+1Ch+arg_0]
0x686164: test    esi, esi
0x686166: mov     ebx, eax
0x686168: jz      loc_6862AE
0x68616E: test    ebx, ebx
0x686170: jz      loc_6862AE
0x686176: mov     ecx, esi
0x686178: call    sub_5E3290
0x68617D: test    al, al
0x68617F: jz      short loc_6861A0
0x686181: mov     ecx, esi; this
0x686183: call    MobileObject_GetCharProxy
0x686188: test    eax, eax
0x68618A: jz      short loc_6861A0
0x68618C: lea     ecx, [eax+1E0h]
0x686192: call    sub_88D370
0x686197: cmp     eax, 2
0x68619A: jz      loc_6862AE
0x6861A0: mov     eax, [esi]
0x6861A2: mov     edx, [eax+174h]
0x6861A8: push    edi
0x6861A9: mov     ecx, esi
0x6861AB: call    edx
0x6861AD: mov     ecx, ebx
0x6861AF: mov     edi, eax
0x6861B1: call    sub_6899C0
0x6861B6: fld     dword ptr [eax+4]
0x6861B9: fsub    dword ptr [edi+4]
0x6861BC: fstp    [esp+20h+arg_0]
0x6861C0: fld     dword ptr [eax+8]
0x6861C3: fsub    dword ptr [edi+8]
0x6861C6: fstp    [esp+20h+var_10]
0x6861CA: fld     dword ptr [eax]
0x6861CC: lea     eax, [esp+20h+var_C]
0x6861D0: fsub    dword ptr [edi]
0x6861D2: push    eax
0x6861D3: fstp    [esp+24h+var_C]
0x6861D7: fld     [esp+24h+arg_0]
0x6861DB: fstp    [esp+24h+var_8]
0x6861DF: fld     [esp+24h+var_10]
0x6861E3: fstp    [esp+24h+var_4]
0x6861E7: call    sub_683CB0
0x6861EC: fstp    [esp+24h+arg_0]
0x6861F0: mov     ecx, ebp
0x6861F2: fld     [esp+24h+arg_0]
0x6861F6: fstp    [esp+24h+var_24]; float
0x6861F9: push    esi; int
0x6861FA: call    sub_683B90
0x6861FF: fstp    [esp+20h+arg_0]
0x686203: mov     ecx, [esi+58h]
0x686206: mov     edx, [ecx]
0x686208: mov     eax, [edx+2C0h]
0x68620E: call    eax
0x686210: test    al, 2
0x686212: pop     edi
0x686213: jz      short loc_686242
0x686215: fld     [esp+1Ch+arg_0]
0x686219: fadd    qword ptr ds:0A3D5B8h
0x68621F: fstp    [esp+1Ch+arg_0]
0x686223: fld     [esp+1Ch+arg_0]
0x686227: fld     qword ptr ds:0A3D5B0h
0x68622D: fcom    st(1)
0x68622F: fnstsw  ax
0x686231: test    ah, 5
0x686234: jp      short loc_68623E
0x686236: fsubp   st(1), st
0x686238: fstp    [esp+1Ch+arg_0]
0x68623C: jmp     short loc_686242
0x68623E: fstp    st(1)
0x686240: fstp    st
0x686242: fld     dword ptr ds:0B3A468h
0x686248: mov     bl, ds:0B15814h
0x68624E: push    ecx
0x68624F: lea     ecx, [esp+20h+var_C]
0x686253: fstp    [esp+20h+var_20]; float
0x686256: push    ecx; int
0x686257: call    sub_47F6F0
0x68625C: add     esp, 8
0x68625F: test    eax, eax
0x686261: jge     short loc_686265
0x686263: mov     bl, 1
0x686265: and     byte ptr [ebp+2Ch], 0DFh
0x686269: fld     [esp+1Ch+arg_0]
0x68626D: test    bl, bl
0x68626F: jz      short loc_68628A
0x686271: mov     edx, [esi]
0x686273: mov     eax, [edx+1E8h]
0x686279: push    ecx
0x68627A: mov     ecx, esi
0x68627C: fstp    [esp+20h+var_20]
0x68627F: call    eax
0x686281: pop     esi
0x686282: pop     ebp
0x686283: pop     ebx
0x686284: add     esp, 10h
0x686287: retn    4
0x68628A: push    0; char
0x68628C: push    ecx
0x68628D: fstp    [esp+24h+var_24]; float
0x686290: push    esi; Concurrency::details::SchedulerBase *
0x686291: call    sub_685530
0x686296: mov     ecx, [esi+58h]
0x686299: mov     edx, [ecx]
0x68629B: mov     eax, [edx+2C0h]
0x6862A1: add     esp, 0Ch
0x6862A4: call    eax
0x6862A6: test    al, 30h
0x6862A8: jz      short loc_6862AE
0x6862AA: or      byte ptr [ebp+2Ch], 20h
0x6862AE: pop     esi
0x6862AF: pop     ebp
0x6862B0: pop     ebx
0x6862B1: add     esp, 10h
0x6862B4: retn    4
