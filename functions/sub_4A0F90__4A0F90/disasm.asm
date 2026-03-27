0x4A0F90: push    0FFFFFFFFh
0x4A0F92: push    offset SEH_8C8970
0x4A0F97: mov     eax, large fs:0
0x4A0F9D: push    eax
0x4A0F9E: push    ecx
0x4A0F9F: push    esi
0x4A0FA0: push    edi
0x4A0FA1: mov     eax, ds:0B30AACh
0x4A0FA6: xor     eax, esp
0x4A0FA8: push    eax
0x4A0FA9: lea     eax, [esp+1Ch+var_C]
0x4A0FAD: mov     large fs:0, eax
0x4A0FB3: mov     edi, ecx
0x4A0FB5: push    0F0h ; 'ð'; Size
0x4A0FBA: call    FormHeapAlloc
0x4A0FBF: add     esp, 4
0x4A0FC2: mov     [esp+1Ch+var_10], eax
0x4A0FC6: xor     esi, esi
0x4A0FC8: cmp     eax, esi
0x4A0FCA: mov     [esp+1Ch+var_4], esi
0x4A0FCE: jz      short loc_4A0FD9
0x4A0FD0: mov     ecx, eax
0x4A0FD2: call    sub_4A0F30
0x4A0FD7: mov     esi, eax
0x4A0FD9: mov     eax, [esp+1Ch+arg_0]
0x4A0FDD: push    eax
0x4A0FDE: push    esi
0x4A0FDF: mov     ecx, edi
0x4A0FE1: mov     [esp+24h+var_4], 0FFFFFFFFh
0x4A0FE9: call    sub_70AC60
0x4A0FEE: fld     dword ptr [edi+0E0h]
0x4A0FF4: mov     eax, [esi]
0x4A0FF6: fstp    dword ptr [esi+0E0h]
0x4A0FFC: fld     dword ptr [edi+0E4h]
0x4A1002: fstp    dword ptr [esi+0E4h]
0x4A1008: mov     cl, [edi+0ECh]
0x4A100E: mov     [esi+0ECh], cl
0x4A1014: mov     dl, [edi+0DCh]
0x4A101A: mov     [esi+0DCh], dl
0x4A1020: mov     edx, [eax+78h]
0x4A1023: mov     ecx, esi
0x4A1025: call    edx
0x4A1027: mov     eax, [esi]
0x4A1029: mov     edx, [eax+50h]
0x4A102C: mov     ecx, esi
0x4A102E: call    edx
0x4A1030: mov     eax, esi
0x4A1032: mov     ecx, [esp+1Ch+var_C]
0x4A1036: mov     large fs:0, ecx
0x4A103D: pop     ecx
0x4A103E: pop     edi
0x4A103F: pop     esi
0x4A1040: add     esp, 10h
0x4A1043: retn    4
