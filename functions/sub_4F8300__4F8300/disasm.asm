0x4F8300: fldz
0x4F8302: push    esi
0x4F8303: mov     esi, [esp+4+arg_0]
0x4F8307: test    esi, esi
0x4F8309: push    edi
0x4F830A: mov     edi, [esp+8+arg_C]
0x4F830E: fstp    qword ptr [edi]
0x4F8310: jz      short loc_4F834C
0x4F8312: mov     eax, [esi]
0x4F8314: mov     edx, [eax+190h]
0x4F831A: mov     ecx, esi
0x4F831C: call    edx
0x4F831E: test    al, al
0x4F8320: jz      short loc_4F834C
0x4F8322: mov     eax, [esp+8+arg_4]
0x4F8326: test    eax, eax
0x4F8328: jz      short loc_4F834C
0x4F832A: mov     eax, [eax+98h]
0x4F8330: push    eax
0x4F8331: mov     eax, [esi]
0x4F8333: mov     edx, [eax+124h]
0x4F8339: mov     ecx, esi
0x4F833B: call    edx
0x4F833D: mov     ecx, eax
0x4F833F: call    MagicTarget_HasEffect
0x4F8344: test    al, al
0x4F8346: jz      short loc_4F834C
0x4F8348: fld1
0x4F834A: fstp    qword ptr [edi]
0x4F834C: cmp     byte ptr ds:0B361ACh, 0
0x4F8353: jz      short loc_4F836A
0x4F8355: fld     qword ptr [edi]
0x4F8357: sub     esp, 8
0x4F835A: fstp    [esp+10h+var_10]
0x4F835D: push    offset aHasMagicEffect0_2f; "Has Magic Effect >> %0.2f"
0x4F8362: call    Interface_ConsolePrint
0x4F8367: add     esp, 0Ch
0x4F836A: pop     edi
0x4F836B: mov     al, 1
0x4F836D: pop     esi
0x4F836E: retn
