0x55CF50: push    0FFFFFFFFh
0x55CF52: push    offset SEH_723F70
0x55CF57: mov     eax, large fs:0
0x55CF5D: push    eax
0x55CF5E: push    ecx
0x55CF5F: push    esi
0x55CF60: push    edi
0x55CF61: mov     eax, ds:0B30AACh
0x55CF66: xor     eax, esp
0x55CF68: push    eax
0x55CF69: lea     eax, [esp+1Ch+var_C]
0x55CF6D: mov     large fs:0, eax
0x55CF73: mov     esi, ecx
0x55CF75: mov     [esp+1Ch+var_10], esi
0x55CF79: mov     dword ptr [esi], offset ??_7BSFaceGenNiNode@@6B@; const BSFaceGenNiNode::`vftable'
0x55CF7F: mov     dword ptr [esi+114h], 0
0x55CF89: mov     edi, [esi+0DCh]
0x55CF8F: test    edi, edi
0x55CF91: mov     [esp+1Ch+var_4], 0
0x55CF99: jz      short loc_55CFB7
0x55CF9B: lea     eax, [edi+4]
0x55CF9E: push    eax; lpAddend
0x55CF9F: call    dword ptr ds:0A2807Ch
0x55CFA5: test    eax, eax
0x55CFA7: jnz     short loc_55CFB7
0x55CFA9: test    edi, edi
0x55CFAB: jz      short loc_55CFB7
0x55CFAD: mov     edx, [edi]
0x55CFAF: mov     eax, [edx]
0x55CFB1: push    1
0x55CFB3: mov     ecx, edi
0x55CFB5: call    eax
0x55CFB7: mov     ecx, esi; this
0x55CFB9: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x55CFC1: call    ??1NiBSPNode@@UAE@XZ; NiBSPNode::~NiBSPNode(void)
0x55CFC6: mov     ecx, dword ptr [esp+1Ch+var_C]
0x55CFCA: mov     large fs:0, ecx
0x55CFD1: pop     ecx
0x55CFD2: pop     edi
0x55CFD3: pop     esi
0x55CFD4: add     esp, 10h
0x55CFD7: retn
