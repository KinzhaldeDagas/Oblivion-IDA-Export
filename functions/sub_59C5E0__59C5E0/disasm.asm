0x59C5E0: push    0FFFFFFFFh
0x59C5E2: push    offset SEH_59C5E0
0x59C5E7: mov     eax, large fs:0
0x59C5ED: push    eax
0x59C5EE: sub     esp, 1Ch
0x59C5F1: mov     eax, ds:0B30AACh
0x59C5F6: xor     eax, esp
0x59C5F8: mov     [esp+28h+var_10], eax
0x59C5FC: push    ebx
0x59C5FD: push    ebp
0x59C5FE: push    esi
0x59C5FF: push    edi
0x59C600: mov     eax, ds:0B30AACh
0x59C605: xor     eax, esp
0x59C607: push    eax; a3
0x59C608: lea     eax, [esp+3Ch+var_C]
0x59C60C: mov     large fs:0, eax
0x59C612: mov     edi, [esp+3Ch+arg_4]
0x59C616: mov     esi, ecx
0x59C618: xor     ebx, ebx
0x59C61A: cmp     [esi+0D8h], ebx
0x59C620: jnz     loc_59C835
0x59C626: mov     ebp, dword ptr [esp+3Ch+arg_0]; char
0x59C62A: lea     eax, [ebp-1]; switch 13 cases
0x59C62D: cmp     eax, 0Ch
0x59C630: ja      def_59C63D; jumptable 0059C63D default case, cases 2-6,11
0x59C636: movzx   eax, ds:byte_59C874[eax]
0x59C63D: jmp     ds:jpt_59C63D[eax*4]; switch jump
0x59C644: mov     ecx, [esi+4]; jumptable 0059C63D case 1
0x59C647: push    0FAEh
0x59C64C: call    Tile_GetFloat
0x59C651: fcomp   dword ptr ds:0A379B4h
0x59C657: fnstsw  ax
0x59C659: test    ah, 44h
0x59C65C: jp      short loc_59C666
0x59C65E: fld1
0x59C660: push    ecx
0x59C661: jmp     loc_59C797
0x59C666: mov     ecx, [esi+38h]
0x59C669: push    0FB5h
0x59C66E: call    Tile_GetFloat
0x59C673: fdiv    qword ptr ds:0A309F0h
0x59C679: mov     ecx, ds:0B33398h
0x59C67F: fmul    qword ptr ds:0A6B760h
0x59C685: fadd    qword ptr ds:0A59B38h
0x59C68B: fstp    dword ptr ds:0B14EE8h
0x59C691: mov     ecx, [ecx+20h]; this
0x59C694: call    InputGlobals__SaveControlSettingsToINI
0x59C699: call    sub_59B9E0
0x59C69E: call    sub_5BD610
0x59C6A3: jmp     def_59C63D; jumptable 0059C63D default case, cases 2-6,11
0x59C6A8: push    1; jumptable 0059C63D case 10
0x59C6AA: call    sub_57DE50
0x59C6AF: add     esp, 4
0x59C6B2: mov     [esp+3Ch+var_28], ebx
0x59C6B6: mov     [esp+3Ch+var_24], bx
0x59C6BB: mov     [esp+3Ch+var_22], bx
0x59C6C0: mov     edx, [esi+5Ch]
0x59C6C3: mov     eax, ds:0B39548h[edx*4]
0x59C6CA: cmp     eax, ebx
0x59C6CC: mov     [esp+3Ch+var_4], ebx
0x59C6D0: jz      short loc_59C6D6
0x59C6D2: mov     ecx, [eax]
0x59C6D4: jmp     short loc_59C6D8
0x59C6D6: xor     ecx, ecx
0x59C6D8: lea     edx, [esp+3Ch+var_20]
0x59C6DC: lea     esp, [esp+0]
0x59C6E0: mov     al, [ecx]
0x59C6E2: mov     [edx], al
0x59C6E4: add     ecx, 1
0x59C6E7: add     edx, 1
0x59C6EA: cmp     al, bl
0x59C6EC: jnz     short loc_59C6E0
0x59C6EE: lea     eax, [esp+3Ch+var_20]
0x59C6F2: push    eax; unsigned __int8 *
0x59C6F3: call    __mbslwr
0x59C6F8: mov     ecx, ds:0B38EF8h
0x59C6FE: mov     eax, ds:0B38EF0h
0x59C703: push    ecx
0x59C704: lea     edx, [esp+44h+var_20]
0x59C708: push    edx
0x59C709: push    eax; ArgList
0x59C70A: lea     ecx, [esp+4Ch+var_28]
0x59C70E: push    offset aSSS?; "%s %s %s?"
0x59C713: push    ecx; int
0x59C714: call    BSStringT_Static_Format
0x59C719: mov     edx, ds:0B38CF8h
0x59C71F: mov     eax, ds:0B38D00h
0x59C724: mov     ecx, [esp+54h+var_28]
0x59C728: push    ebx
0x59C729: push    edx
0x59C72A: push    eax
0x59C72B: push    1
0x59C72D: push    offset sub_59B8C0
0x59C732: push    ecx
0x59C733: call    ShowUIMessageBox
0x59C738: add     esp, 30h
0x59C73B: lea     ecx, [esp+3Ch+var_28]; void *
0x59C73F: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x59C747: call    BSStringT_Clear
0x59C74C: jmp     def_59C63D; jumptable 0059C63D default case, cases 2-6,11
0x59C751: push    1; jumptable 0059C63D cases 12,13
0x59C753: call    sub_57DE50
0x59C758: add     esp, 4
0x59C75B: push    ebp
0x59C75C: mov     ecx, esi
0x59C75E: call    sub_587500
0x59C763: cmp     eax, 0Bh
0x59C766: mov     ecx, esi
0x59C768: jnz     short loc_59C771
0x59C76A: call    sub_59B980
0x59C76F: jmp     short loc_59C776
0x59C771: call    sub_59B920
0x59C776: cmp     al, bl
0x59C778: jz      loc_59C699
0x59C77E: mov     byte ptr [esi+0D4h], 1
0x59C785: jmp     def_59C63D; jumptable 0059C63D default case, cases 2-6,11
0x59C78A: push    1; jumptable 0059C63D case 9
0x59C78C: call    sub_57DE50
0x59C791: fld     dword ptr ds:0A379B4h
0x59C797: mov     ecx, [esi+4]; this
0x59C79A: fstp    [esp+40h+a2]; a3
0x59C79D: push    0FAEh; a2
0x59C7A2: call    Tile_SetFloat
0x59C7A7: jmp     short def_59C63D; jumptable 0059C63D default case, cases 2-6,11
0x59C7A9: push    3; jumptable 0059C63D case 8
0x59C7AB: call    sub_57DE50
0x59C7B0: mov     ecx, ds:0B14ED8h
0x59C7B6: mov     eax, ds:0B14EC8h
0x59C7BB: xor     eax, ecx
0x59C7BD: xor     ecx, eax
0x59C7BF: xor     eax, ecx
0x59C7C1: mov     ds:0B14EC8h, eax
0x59C7C6: mov     eax, ds:0B14ED0h
0x59C7CB: mov     ds:0B14ED8h, ecx
0x59C7D1: mov     ecx, ds:0B14EE0h
0x59C7D7: xor     eax, ecx
0x59C7D9: xor     ecx, eax
0x59C7DB: add     esp, 4
0x59C7DE: xor     eax, ecx
0x59C7E0: mov     ds:0B14EE0h, ecx
0x59C7E6: mov     ds:0B14ED0h, eax
0x59C7EB: mov     byte ptr [esi+0D4h], 1
0x59C7F2: jmp     short def_59C63D; jumptable 0059C63D default case, cases 2-6,11
0x59C7F4: push    3; jumptable 0059C63D case 7
0x59C7F6: call    sub_57DE50
0x59C7FB: add     esp, 4
0x59C7FE: cmp     ds:0B14F38h, bl
0x59C804: mov     ecx, offset byte_B14F38
0x59C809: setz    dl
0x59C80C: mov     ds:0B14F38h, dl
0x59C812: call    sub_404E10
0x59C817: mov     ecx, esi
0x59C819: push    eax
0x59C81A: push    edi
0x59C81B: call    sub_59B640
0x59C820: cmp     ebp, 0Dh; jumptable 0059C63D default case, cases 2-6,11
0x59C823: jle     short loc_59C835
0x59C825: cmp     [esi+0E4h], bl
0x59C82B: jnz     short loc_59C835
0x59C82D: push    edi
0x59C82E: mov     ecx, esi
0x59C830: call    sub_59C3F0
0x59C835: mov     ecx, [esp+3Ch+var_C]
0x59C839: mov     large fs:0, ecx
0x59C840: pop     ecx
0x59C841: pop     edi
0x59C842: pop     esi
0x59C843: pop     ebp
0x59C844: pop     ebx
0x59C845: mov     ecx, [esp+28h+var_10]
0x59C849: xor     ecx, esp
0x59C84B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x59C850: add     esp, 28h
0x59C853: retn    8
