0x813510: push    0FFFFFFFFh
0x813512: push    offset SEH_813510
0x813517: mov     eax, large fs:0
0x81351D: push    eax
0x81351E: sub     esp, 0CCh
0x813524: push    ebx
0x813525: push    ebp
0x813526: push    esi
0x813527: push    edi
0x813528: mov     eax, ds:0B30AACh
0x81352D: xor     eax, esp
0x81352F: push    eax
0x813530: lea     eax, [esp+0ECh+var_C]
0x813537: mov     large fs:0, eax
0x81353D: mov     ebp, ecx
0x81353F: mov     eax, ds:0B25AD0h
0x813544: mov     ecx, ds:0B25AD4h
0x81354A: mov     edx, ds:0B25AD8h
0x813550: mov     [esp+0ECh+var_C4], eax
0x813554: mov     eax, ds:0B25ADCh
0x813559: mov     [esp+0ECh+var_C0], ecx
0x81355D: mov     ecx, ds:0B43104h
0x813563: mov     [esp+0ECh+var_BC], edx
0x813567: mov     [esp+0ECh+var_B8], eax
0x81356B: mov     edx, [ecx]
0x81356D: mov     edx, [edx+68h]
0x813570: lea     eax, [esp+0ECh+var_C4]
0x813574: xor     edi, edi
0x813576: push    eax
0x813577: mov     [esp+0F0h+var_D8], edi
0x81357B: mov     [esp+0F0h+var_CC], edi
0x81357F: call    edx
0x813581: cmp     word ptr ds:0B42EACh, 5
0x813589: jnz     short loc_8135C6
0x81358B: mov     eax, [ebp+144h]
0x813591: fld     dword ptr ds:0A3765Ch
0x813597: movzx   ecx, word ptr [eax+118h]
0x81359E: fst     [esp+0F0h+var_B8]
0x8135A2: fst     [esp+0F0h+var_B4]
0x8135A6: mov     [esp+0F0h+var_D0], ecx
0x8135AA: mov     ecx, ds:0B43104h
0x8135B0: fstp    [esp+0F0h+var_B0]
0x8135B4: fld1
0x8135B6: lea     eax, [esp+0F0h+var_B8]
0x8135BA: fstp    [esp+0F0h+var_AC]
0x8135BE: mov     edx, [ecx]
0x8135C0: mov     edx, [edx+60h]
0x8135C3: push    eax
0x8135C4: call    edx
0x8135C6: mov     [esp+0F4h+var_D8], edi
0x8135CA: push    edi
0x8135CB: mov     ecx, ebp
0x8135CD: call    sub_812EF0
0x8135D2: mov     eax, [ebp+140h]
0x8135D8: test    eax, eax
0x8135DA: jz      short loc_8135E5
0x8135DC: mov     esi, [esp+0F4h+var_D0]
0x8135E0: add     eax, 20h ; ' '
0x8135E3: jmp     short loc_8135F4
0x8135E5: xor     esi, esi
0x8135E7: or      [esp+0F4h+var_E0], 1
0x8135EC: mov     [esp+0F4h+var_D0], esi
0x8135F0: lea     eax, [esp+0F4h+var_D0]
0x8135F4: test    byte ptr [esp+0F4h+var_E0], 1
0x8135F9: mov     ebx, [eax]
0x8135FB: jz      short loc_81361E
0x8135FD: and     [esp+0F4h+var_E0], 0FFFFFFFEh
0x813602: test    esi, esi
0x813604: jz      short loc_81361E
0x813606: lea     eax, [esi+4]
0x813609: push    eax; lpAddend
0x81360A: call    dword ptr ds:0A2807Ch
0x813610: test    eax, eax
0x813612: jnz     short loc_81361E
0x813614: mov     edx, [esi]
0x813616: mov     eax, [edx]
0x813618: push    1
0x81361A: mov     ecx, esi
0x81361C: call    eax
0x81361E: mov     [ebx+40h], edi
0x813621: mov     esi, [ebx+30h]
0x813624: cmp     esi, [ebx+edi*4+44h]
0x813628: jz      short loc_813663
0x81362A: test    esi, esi
0x81362C: jz      short loc_81364A
0x81362E: lea     ecx, [esi+4]
0x813631: push    ecx; lpAddend
0x813632: call    dword ptr ds:0A2807Ch
0x813638: test    eax, eax
0x81363A: jnz     short loc_81364A
0x81363C: test    esi, esi
0x81363E: jz      short loc_81364A
0x813640: mov     edx, [esi]
0x813642: mov     eax, [edx]
0x813644: push    1
0x813646: mov     ecx, esi
0x813648: call    eax
0x81364A: mov     eax, [ebx+edi*4+44h]
0x81364E: test    eax, eax
0x813650: mov     [ebx+30h], eax
0x813653: jz      short loc_813663
0x813655: mov     ebx, ds:0A28078h
0x81365B: add     eax, 4
0x81365E: push    eax; lpAddend
0x81365F: call    ebx ; InterlockedIncrement
0x813661: jmp     short loc_813669
0x813663: mov     ebx, ds:0A28078h
0x813669: mov     ecx, [ebp+140h]
0x81366F: call    BSRenderedTexture__UseTextureToRender
0x813674: push    eax; a2
0x813675: push    7; a1
0x813677: call    NiRenderer_BeginScene
0x81367C: add     esp, 8
0x81367F: xor     eax, eax
0x813681: cmp     edi, 5; switch 6 cases
0x813684: ja      short def_813686
0x813686: jmp     ds:jpt_813686[edi*4]; switch jump
0x81368D: mov     eax, 2; jumptable 00813686 case 1
0x813692: jmp     short def_813686
0x813694: mov     eax, 1; jumptable 00813686 case 0
0x813699: jmp     short def_813686
0x81369B: mov     eax, 8; jumptable 00813686 case 3
0x8136A0: jmp     short def_813686
0x8136A2: mov     eax, 4; jumptable 00813686 case 2
0x8136A7: jmp     short def_813686
0x8136A9: mov     eax, 20h ; ' '; jumptable 00813686 case 5
0x8136AE: jmp     short def_813686
0x8136B0: mov     eax, 10h; jumptable 00813686 case 4
