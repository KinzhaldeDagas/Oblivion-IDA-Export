0x684830: push    ecx
0x684831: push    ebx
0x684832: mov     ebx, ecx
0x684834: mov     eax, [ebx+28h]
0x684837: test    eax, eax
0x684839: jz      loc_6848C1
0x68483F: push    ebp
0x684840: mov     ebp, ds:0A2807Ch
0x684846: push    esi
0x684847: mov     esi, [eax+1Ch]
0x68484A: test    esi, esi
0x68484C: jz      short loc_68488B
0x68484E: mov     edx, [esi]
0x684850: mov     edx, [edx+88h]
0x684856: push    eax
0x684857: lea     eax, [esp+14h+var_4]
0x68485B: push    eax
0x68485C: mov     ecx, esi
0x68485E: call    edx
0x684860: mov     eax, dword ptr [esp+10h+var_4]
0x684864: test    eax, eax
0x684866: jz      short loc_684884
0x684868: push    edi
0x684869: mov     edi, eax
0x68486B: add     eax, 4
0x68486E: push    eax; lpAddend
0x68486F: call    ebp ; InterlockedDecrement
0x684871: test    eax, eax
0x684873: jnz     short loc_684883
0x684875: test    edi, edi
0x684877: jz      short loc_684883
0x684879: mov     eax, [edi]
0x68487B: mov     edx, [eax]
0x68487D: push    1
0x68487F: mov     ecx, edi
0x684881: call    edx
0x684883: pop     edi
0x684884: mov     ecx, esi; this
0x684886: call    NiAVObject_InitializePropertyState
0x68488B: mov     esi, [ebx+28h]
0x68488E: test    esi, esi
0x684890: jz      short loc_6848B1
0x684892: lea     eax, [esi+4]
0x684895: push    eax; lpAddend
0x684896: call    ebp ; InterlockedDecrement
0x684898: test    eax, eax
0x68489A: jnz     short loc_6848AA
0x68489C: test    esi, esi
0x68489E: jz      short loc_6848AA
0x6848A0: mov     edx, [esi]
0x6848A2: mov     eax, [edx]
0x6848A4: push    1
0x6848A6: mov     ecx, esi
0x6848A8: call    eax
0x6848AA: mov     dword ptr [ebx+28h], 0
0x6848B1: mov     ecx, [ebx+30h]
0x6848B4: test    ecx, ecx
0x6848B6: pop     esi
0x6848B7: pop     ebp
0x6848B8: jz      short loc_6848C1
0x6848BA: push    0
0x6848BC: call    sub_680E20
0x6848C1: pop     ebx
0x6848C2: pop     ecx
0x6848C3: retn
