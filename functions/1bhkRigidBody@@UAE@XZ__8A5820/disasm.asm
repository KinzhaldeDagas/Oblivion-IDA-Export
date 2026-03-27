0x8A5820: push    0FFFFFFFFh
0x8A5822: push    offset ??1bhkRigidBody@@UAE@XZ_SEH
0x8A5827: mov     eax, large fs:0
0x8A582D: push    eax
0x8A582E: push    ecx
0x8A582F: push    esi
0x8A5830: push    edi
0x8A5831: mov     eax, ds:0B30AACh
0x8A5836: xor     eax, esp
0x8A5838: push    eax
0x8A5839: lea     eax, [esp+1Ch+var_C]
0x8A583D: mov     large fs:0, eax
0x8A5843: mov     esi, ecx
0x8A5845: mov     [esp+1Ch+var_10], esi
0x8A5849: mov     dword ptr [esi], offset ??_7bhkRigidBody@@6B@; const bhkRigidBody::`vftable'
0x8A584F: lea     edi, [esi+10h]
0x8A5852: mov     ecx, edi
0x8A5854: mov     [esp+1Ch+var_4], 1
0x8A585C: call    sub_8A4DB0
0x8A5861: mov     ecx, esi
0x8A5863: call    sub_89D700
0x8A5868: sub     dword ptr ds:0BA7D80h, 1
0x8A586F: mov     edi, [edi]
0x8A5871: test    edi, edi
0x8A5873: mov     byte ptr [esp+1Ch+var_4], 0
0x8A5878: jz      short loc_8A5896
0x8A587A: lea     eax, [edi+4]
0x8A587D: push    eax; lpAddend
0x8A587E: call    dword ptr ds:0A2807Ch
0x8A5884: test    eax, eax
0x8A5886: jnz     short loc_8A5896
0x8A5888: test    edi, edi
0x8A588A: jz      short loc_8A5896
0x8A588C: mov     edx, [edi]
0x8A588E: mov     eax, [edx]
0x8A5890: push    1
0x8A5892: mov     ecx, edi
0x8A5894: call    eax
0x8A5896: mov     ecx, esi; this
0x8A5898: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x8A58A0: call    ??1bhkEntity@@UAE@XZ; bhkEntity::~bhkEntity(void)
0x8A58A5: mov     ecx, dword ptr [esp+1Ch+var_C]
0x8A58A9: mov     large fs:0, ecx
0x8A58B0: pop     ecx
0x8A58B1: pop     edi
0x8A58B2: pop     esi
0x8A58B3: add     esp, 10h
0x8A58B6: retn
