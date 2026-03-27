0x6D4000: push    0FFFFFFFFh
0x6D4002: push    offset SEH_6D4000
0x6D4007: mov     eax, large fs:0
0x6D400D: push    eax
0x6D400E: sub     esp, 8
0x6D4011: push    ebx
0x6D4012: push    ebp
0x6D4013: push    esi
0x6D4014: push    edi
0x6D4015: mov     eax, ds:0B30AACh
0x6D401A: xor     eax, esp
0x6D401C: push    eax
0x6D401D: lea     eax, [esp+28h+var_C]
0x6D4021: mov     large fs:0, eax
0x6D4027: mov     edi, [esp+28h+arg_0]
0x6D402B: mov     ecx, [edi+30h]
0x6D402E: push    offset dword_B3CA58
0x6D4033: mov     [esp+2Ch+var_14], ecx
0x6D4037: call    sub_700010
0x6D403C: mov     esi, eax
0x6D403E: xor     ebp, ebp
0x6D4040: cmp     esi, ebp
0x6D4042: mov     [esp+28h+var_10], esi
0x6D4046: jz      short loc_6D4052
0x6D4048: lea     eax, [esi+4]
0x6D404B: push    eax; lpAddend
0x6D404C: call    dword ptr ds:0A28078h
0x6D4052: push    5Ch ; '\'; Size
0x6D4054: mov     [esp+2Ch+var_4], ebp
0x6D4058: call    FormHeapAlloc
0x6D405D: add     esp, 4
0x6D4060: mov     [esp+28h+arg_0], eax
0x6D4064: cmp     eax, ebp
0x6D4066: mov     byte ptr [esp+28h+var_4], 1
0x6D406B: jz      short loc_6D407E
0x6D406D: mov     ecx, [edi+4Ch]
0x6D4070: mov     edx, [edi+48h]
0x6D4073: push    ecx
0x6D4074: push    edx
0x6D4075: mov     ecx, eax; this
0x6D4077: call    ??0NiPathInterpolator@@QAE@XZ; NiPathInterpolator::NiPathInterpolator(void)
0x6D407C: mov     ebp, eax
0x6D407E: mov     cl, [edi+3Ch]
0x6D4081: shr     cl, 2
0x6D4084: and     cl, 1
0x6D4087: mov     byte ptr [esp+28h+var_4], 0
0x6D408C: jz      short loc_6D4095
0x6D408E: or      word ptr [ebp+0Ch], 4
0x6D4093: jmp     short loc_6D409B
0x6D4095: and     word ptr [ebp+0Ch], 0FFFBh
0x6D409B: mov     dl, [edi+3Ch]
0x6D409E: shr     dl, 3
0x6D40A1: and     dl, 1
0x6D40A4: jz      short loc_6D40AD
0x6D40A6: or      word ptr [ebp+0Ch], 8
0x6D40AB: jmp     short loc_6D40B3
0x6D40AD: and     word ptr [ebp+0Ch], 0FFF7h
0x6D40B3: mov     eax, [edi+68h]
0x6D40B6: mov     [ebp+38h], eax
0x6D40B9: mov     al, [edi+3Ch]
0x6D40BC: shr     al, 4
0x6D40BF: and     al, 1
0x6D40C1: jz      short loc_6D40E1
0x6D40C3: or      word ptr [ebp+0Ch], 10h
0x6D40C8: mov     ecx, ebp
0x6D40CA: call    sub_6DBBC0
0x6D40CF: mov     cl, [edi+3Ch]
0x6D40D2: shr     cl, 5
0x6D40D5: and     cl, 1
0x6D40D8: jz      short loc_6D40E9
0x6D40DA: or      word ptr [ebp+0Ch], 20h
0x6D40DF: jmp     short loc_6D40EF
0x6D40E1: and     word ptr [ebp+0Ch], 0FFEFh
0x6D40E7: jmp     short loc_6D40CF
0x6D40E9: and     word ptr [ebp+0Ch], 0FFDFh
0x6D40EF: fld     dword ptr [edi+58h]
0x6D40F2: fstp    [esp+28h+arg_0]
0x6D40F6: fld     [esp+28h+arg_0]
0x6D40FA: fstp    dword ptr [ebp+28h]
0x6D40FD: fld     dword ptr [edi+5Ch]
0x6D4100: fstp    [esp+28h+arg_0]
0x6D4104: fld     [esp+28h+arg_0]
0x6D4108: fstp    dword ptr [ebp+2Ch]
0x6D410B: movzx   eax, word ptr [edi+60h]
0x6D410F: mov     [ebp+30h], ax
0x6D4113: mov     dl, [edi+3Ch]
0x6D4116: shr     dl, 6
0x6D4119: and     dl, 1
0x6D411C: jz      short loc_6D4125
0x6D411E: or      word ptr [ebp+0Ch], 40h
0x6D4123: jmp     short loc_6D412B
0x6D4125: and     word ptr [ebp+0Ch], 0FFBFh
0x6D412B: mov     al, [edi+3Ch]
0x6D412E: shr     al, 1
0x6D4130: and     al, 1
0x6D4132: mov     ebx, 2
0x6D4137: jz      short loc_6D413F
0x6D4139: or      [ebp+0Ch], bx
0x6D413D: jmp     short loc_6D4145
0x6D413F: and     word ptr [ebp+0Ch], 0FFFDh
0x6D4145: test    esi, esi
0x6D4147: jz      short loc_6D4178
0x6D4149: mov     edx, [esi]
0x6D414B: mov     eax, [edx+80h]
0x6D4151: push    0
0x6D4153: mov     ecx, esi
0x6D4155: call    eax
0x6D4157: test    eax, eax
0x6D4159: jnz     short loc_6D4178
0x6D415B: mov     edx, [esi]
0x6D415D: push    eax
0x6D415E: mov     eax, [edx+84h]
0x6D4164: push    ebp
0x6D4165: mov     ecx, esi
0x6D4167: call    eax
0x6D4169: push    esi
0x6D416A: push    edi
0x6D416B: call    sub_6D3B40
0x6D4170: add     esp, 8
0x6D4173: jmp     loc_6D427D
0x6D4178: push    40h ; '@'; Size
0x6D417A: call    FormHeapAlloc
0x6D417F: add     esp, 4
0x6D4182: mov     [esp+28h+arg_0], eax
0x6D4186: test    eax, eax
0x6D4188: mov     byte ptr [esp+28h+var_4], bl
0x6D418C: jz      short loc_6D4199
0x6D418E: mov     ecx, eax
0x6D4190: call    sub_6C3E50
0x6D4195: mov     ebx, eax
0x6D4197: jmp     short loc_6D419B
0x6D4199: xor     ebx, ebx
0x6D419B: cmp     esi, ebx
0x6D419D: mov     byte ptr [esp+28h+var_4], 0
0x6D41A2: jz      short loc_6D41D4
0x6D41A4: test    esi, esi
0x6D41A6: jz      short loc_6D41C0
0x6D41A8: lea     ecx, [esi+4]
0x6D41AB: push    ecx; lpAddend
0x6D41AC: call    dword ptr ds:0A2807Ch
0x6D41B2: test    eax, eax
0x6D41B4: jnz     short loc_6D41C0
0x6D41B6: mov     edx, [esi]
0x6D41B8: mov     eax, [edx]
0x6D41BA: push    1
0x6D41BC: mov     ecx, esi
0x6D41BE: call    eax
0x6D41C0: test    ebx, ebx
0x6D41C2: mov     esi, ebx
0x6D41C4: mov     [esp+28h+var_10], esi
0x6D41C8: jz      short loc_6D41D4
0x6D41CA: add     ebx, 4
0x6D41CD: push    ebx; lpAddend
0x6D41CE: call    dword ptr ds:0A28078h
0x6D41D4: mov     edx, [esi]
0x6D41D6: mov     eax, [edx+84h]
0x6D41DC: push    0
0x6D41DE: push    ebp
0x6D41DF: mov     ecx, esi
0x6D41E1: call    eax
0x6D41E3: mov     edx, [esi]
0x6D41E5: mov     ebx, [esp+28h+var_14]
0x6D41E9: mov     eax, [edx+58h]
0x6D41EC: push    ebx
0x6D41ED: mov     ecx, esi
0x6D41EF: call    eax
0x6D41F1: push    esi
0x6D41F2: push    edi
0x6D41F3: call    sub_6D3B40
0x6D41F8: mov     eax, [esi+34h]
0x6D41FB: add     esp, 8
0x6D41FE: push    eax; a2
0x6D41FF: mov     ecx, ebx; this
0x6D4201: call    sub_478300
0x6D4206: mov     eax, [edi+34h]
0x6D4209: mov     ebx, [esi+34h]
0x6D420C: cmp     ebx, eax
0x6D420E: mov     [esp+28h+arg_0], eax
0x6D4212: jz      short loc_6D4249
0x6D4214: test    ebx, ebx
0x6D4216: jz      short loc_6D4238
0x6D4218: lea     ecx, [ebx+4]
0x6D421B: push    ecx; lpAddend
0x6D421C: call    dword ptr ds:0A2807Ch
0x6D4222: test    eax, eax
0x6D4224: jnz     short loc_6D4234
0x6D4226: test    ebx, ebx
0x6D4228: jz      short loc_6D4234
0x6D422A: mov     edx, [ebx]
0x6D422C: mov     eax, [edx]
0x6D422E: push    1
0x6D4230: mov     ecx, ebx
0x6D4232: call    eax
0x6D4234: mov     eax, [esp+28h+arg_0]
0x6D4238: test    eax, eax
0x6D423A: mov     [esi+34h], eax
0x6D423D: jz      short loc_6D4249
0x6D423F: add     eax, 4
0x6D4242: push    eax; lpAddend
0x6D4243: call    dword ptr ds:0A28078h
0x6D4249: mov     ebx, [edi+34h]
0x6D424C: cmp     ebx, esi
0x6D424E: jz      short loc_6D427D
0x6D4250: test    ebx, ebx
0x6D4252: jz      short loc_6D4270
0x6D4254: lea     ecx, [ebx+4]
0x6D4257: push    ecx; lpAddend
0x6D4258: call    dword ptr ds:0A2807Ch
0x6D425E: test    eax, eax
0x6D4260: jnz     short loc_6D4270
0x6D4262: test    ebx, ebx
0x6D4264: jz      short loc_6D4270
0x6D4266: mov     edx, [ebx]
0x6D4268: mov     eax, [edx]
0x6D426A: push    1
0x6D426C: mov     ecx, ebx
0x6D426E: call    eax
0x6D4270: lea     ecx, [esi+4]
0x6D4273: push    ecx; lpAddend
0x6D4274: mov     [edi+34h], esi
0x6D4277: call    dword ptr ds:0A28078h
0x6D427D: mov     edx, [ebp+0]
0x6D4280: mov     eax, [edx+7Ch]
0x6D4283: mov     ecx, ebp
0x6D4285: call    eax
0x6D4287: mov     ecx, [esp+28h+var_14]
0x6D428B: test    ecx, ecx
0x6D428D: jz      short loc_6D4295
0x6D428F: push    edi
0x6D4290: call    sub_6FFE90
0x6D4295: lea     ecx, [esi+4]
0x6D4298: push    ecx; lpAddend
0x6D4299: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x6D42A1: call    dword ptr ds:0A2807Ch
0x6D42A7: test    eax, eax
0x6D42A9: jnz     short loc_6D42B5
0x6D42AB: mov     edx, [esi]
0x6D42AD: mov     eax, [edx]
0x6D42AF: push    1
0x6D42B1: mov     ecx, esi
0x6D42B3: call    eax
0x6D42B5: mov     ecx, [esp+28h+var_C]
0x6D42B9: mov     large fs:0, ecx
0x6D42C0: pop     ecx
0x6D42C1: pop     edi
0x6D42C2: pop     esi
0x6D42C3: pop     ebp
0x6D42C4: pop     ebx
0x6D42C5: add     esp, 14h
0x6D42C8: retn
