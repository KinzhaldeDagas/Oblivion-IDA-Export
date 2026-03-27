0x4F7220: fldz
0x4F7222: mov     ecx, [esp+arg_4]
0x4F7226: push    esi
0x4F7227: mov     esi, [esp+4+arg_C]
0x4F722B: xor     eax, eax
0x4F722D: fstp    qword ptr [esi]
0x4F722F: test    ecx, ecx
0x4F7231: jz      short loc_4F7241
0x4F7233: movzx   edx, byte ptr [ecx+4]
0x4F7237: add     edx, 0FFFFFFCFh
0x4F723A: cmp     edx, 2
0x4F723D: ja      short loc_4F7241
0x4F723F: mov     eax, ecx
0x4F7241: mov     ecx, [esp+4+arg_0]
0x4F7245: test    ecx, ecx
0x4F7247: jz      short loc_4F7255
0x4F7249: test    eax, eax
0x4F724B: jz      short loc_4F7255
0x4F724D: cmp     ecx, eax
0x4F724F: jnz     short loc_4F7255
0x4F7251: fld1
0x4F7253: fstp    qword ptr [esi]
0x4F7255: cmp     byte ptr ds:0B361ACh, 0
0x4F725C: jz      short loc_4F7273
0x4F725E: fld     qword ptr [esi]
0x4F7260: sub     esp, 8
0x4F7263: fstp    [esp+0Ch+var_C]
0x4F7266: push    offset aGetisref0_2f; "GetIsRef >> %0.2f"
0x4F726B: call    Interface_ConsolePrint
0x4F7270: add     esp, 0Ch
0x4F7273: mov     al, 1
0x4F7275: pop     esi
0x4F7276: retn
