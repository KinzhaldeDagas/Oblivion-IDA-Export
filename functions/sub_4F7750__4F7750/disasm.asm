0x4F7750: fldz
0x4F7752: push    esi
0x4F7753: mov     esi, [esp+4+arg_0]
0x4F7757: test    esi, esi
0x4F7759: push    edi
0x4F775A: mov     edi, [esp+8+arg_C]
0x4F775E: fstp    qword ptr [edi]
0x4F7760: jz      short def_4F77A2; jumptable 004F77A2 default case, case 4
0x4F7762: mov     eax, [esi]
0x4F7764: mov     edx, [eax+190h]
0x4F776A: mov     ecx, esi
0x4F776C: call    edx
0x4F776E: test    al, al
0x4F7770: jz      short def_4F77A2; jumptable 004F77A2 default case, case 4
0x4F7772: mov     ecx, [esi+58h]
0x4F7775: test    ecx, ecx
0x4F7777: jz      short def_4F77A2; jumptable 004F77A2 default case, case 4
0x4F7779: mov     eax, [ecx]
0x4F777B: mov     edx, [eax+0ECh]
0x4F7781: push    1
0x4F7783: call    edx
0x4F7785: test    eax, eax
0x4F7787: jz      short def_4F77A2; jumptable 004F77A2 default case, case 4
0x4F7789: mov     eax, [eax+8]
0x4F778C: test    eax, eax
0x4F778E: jz      short def_4F77A2; jumptable 004F77A2 default case, case 4
0x4F7790: cmp     byte ptr [eax+4], 21h ; '!'
0x4F7794: jnz     short def_4F77A2; jumptable 004F77A2 default case, case 4
0x4F7796: movsx   eax, byte ptr [eax+90h]
0x4F779D: cmp     eax, 5; switch 6 cases
0x4F77A0: ja      short def_4F77A2; jumptable 004F77A2 default case, case 4
0x4F77A2: jmp     ds:jpt_4F77A2[eax*4]; switch jump
0x4F77A9: fld1; jumptable 004F77A2 cases 0,2
0x4F77AB: jmp     short loc_4F77BB
0x4F77AD: fld     qword ptr ds:0A3D0C0h; jumptable 004F77A2 cases 1,3
0x4F77B3: jmp     short loc_4F77BB
0x4F77B5: fld     qword ptr ds:0A30E48h; jumptable 004F77A2 case 5
0x4F77BB: fstp    qword ptr [edi]
0x4F77BD: cmp     byte ptr ds:0B361ACh, 0; jumptable 004F77A2 default case, case 4
0x4F77C4: jz      short loc_4F77DB
0x4F77C6: fld     qword ptr [edi]
0x4F77C8: sub     esp, 8
0x4F77CB: fstp    [esp+10h+var_14+4]
0x4F77CE: push    offset aGetWeaponAnim0; "Get Weapon Anim >> %0.2f"
0x4F77D3: call    Interface_ConsolePrint
0x4F77D8: add     esp, 0Ch
0x4F77DB: pop     edi
0x4F77DC: mov     al, 1
0x4F77DE: pop     esi
0x4F77DF: retn
