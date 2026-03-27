0x4F5120: fldz
0x4F5122: push    esi
0x4F5123: mov     esi, [esp+4+arg_0]
0x4F5127: test    esi, esi
0x4F5129: push    edi
0x4F512A: mov     edi, [esp+8+arg_C]
0x4F512E: fstp    qword ptr [edi]
0x4F5130: jz      short loc_4F5156
0x4F5132: mov     eax, [esi]
0x4F5134: mov     edx, [eax+190h]
0x4F513A: mov     ecx, esi
0x4F513C: call    edx
0x4F513E: test    al, al
0x4F5140: jz      short loc_4F5156
0x4F5142: mov     eax, [esi]
0x4F5144: mov     edx, [eax+350h]
0x4F514A: mov     ecx, esi
0x4F514C: call    edx
0x4F514E: test    al, al
0x4F5150: jz      short loc_4F5156
0x4F5152: fld1
0x4F5154: fstp    qword ptr [edi]
0x4F5156: cmp     byte ptr ds:0B361ACh, 0
0x4F515D: jz      short loc_4F5174
0x4F515F: fld     qword ptr [edi]
0x4F5161: sub     esp, 8
0x4F5164: fstp    [esp+10h+var_10]
0x4F5167: push    offset aIsYielding0_2f; "Is Yielding >> %0.2f"
0x4F516C: call    Interface_ConsolePrint
0x4F5171: add     esp, 0Ch
0x4F5174: pop     edi
0x4F5175: mov     al, 1
0x4F5177: pop     esi
0x4F5178: retn
