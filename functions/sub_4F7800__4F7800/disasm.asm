0x4F7800: fldz
0x4F7802: push    esi
0x4F7803: mov     esi, [esp+4+arg_0]
0x4F7807: test    esi, esi
0x4F7809: push    edi
0x4F780A: mov     edi, [esp+8+arg_C]
0x4F780E: fstp    qword ptr [edi]
0x4F7810: jz      short def_4F7852; jumptable 004F7852 default case, case 4
0x4F7812: mov     eax, [esi]
0x4F7814: mov     edx, [eax+190h]
0x4F781A: mov     ecx, esi
0x4F781C: call    edx
0x4F781E: test    al, al
0x4F7820: jz      short def_4F7852; jumptable 004F7852 default case, case 4
0x4F7822: mov     ecx, [esi+58h]
0x4F7825: test    ecx, ecx
0x4F7827: jz      short def_4F7852; jumptable 004F7852 default case, case 4
0x4F7829: mov     eax, [ecx]
0x4F782B: mov     edx, [eax+0ECh]
0x4F7831: push    1
0x4F7833: call    edx
0x4F7835: test    eax, eax
0x4F7837: jz      short def_4F7852; jumptable 004F7852 default case, case 4
0x4F7839: mov     eax, [eax+8]
0x4F783C: test    eax, eax
0x4F783E: jz      short def_4F7852; jumptable 004F7852 default case, case 4
0x4F7840: cmp     byte ptr [eax+4], 21h ; '!'
0x4F7844: jnz     short def_4F7852; jumptable 004F7852 default case, case 4
0x4F7846: movsx   eax, byte ptr [eax+90h]
0x4F784D: cmp     eax, 5; switch 6 cases
0x4F7850: ja      short def_4F7852; jumptable 004F7852 default case, case 4
0x4F7852: jmp     ds:jpt_4F7852[eax*4]; switch jump
0x4F7859: fld1; jumptable 004F7852 cases 0,1
0x4F785B: jmp     short loc_4F786B
0x4F785D: fld     qword ptr ds:0A3D0C0h; jumptable 004F7852 cases 2,3
0x4F7863: jmp     short loc_4F786B
0x4F7865: fld     qword ptr ds:0A30E48h; jumptable 004F7852 case 5
0x4F786B: fstp    qword ptr [edi]
0x4F786D: cmp     byte ptr ds:0B361ACh, 0; jumptable 004F7852 default case, case 4
0x4F7874: jz      short loc_4F788B
0x4F7876: fld     qword ptr [edi]
0x4F7878: sub     esp, 8
0x4F787B: fstp    [esp+10h+var_14+4]
0x4F787E: push    offset aGetWeaponSkill; "Get Weapon Skill >> %0.2f"
0x4F7883: call    Interface_ConsolePrint
0x4F7888: add     esp, 0Ch
0x4F788B: pop     edi
0x4F788C: mov     al, 1
0x4F788E: pop     esi
0x4F788F: retn
