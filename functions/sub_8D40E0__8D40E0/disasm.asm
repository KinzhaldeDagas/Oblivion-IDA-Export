0x8D40E0: mov     eax, [esp+arg_4]
0x8D40E4: mov     ecx, [eax+38h]
0x8D40E7: push    edi
0x8D40E8: xor     edi, edi
0x8D40EA: test    ecx, ecx
0x8D40EC: jle     loc_8D4195
0x8D40F2: push    ebx
0x8D40F3: mov     ebx, [esp+8+arg_C]
0x8D40F7: push    ebp
0x8D40F8: push    esi
0x8D40F9: lea     esp, [esp+0]
0x8D4100: mov     ecx, [esp+10h+arg_4]
0x8D4104: mov     edx, [ecx+34h]
0x8D4107: mov     ebp, [edx+edi*4]
0x8D410A: mov     esi, [ebp+50h]
0x8D410D: mov     eax, [esp+10h+arg_0]
0x8D4111: add     esi, 10h
0x8D4114: push    esi; int
0x8D4115: push    eax; float
0x8D4116: call    sub_8DD530
0x8D411B: mov     ecx, [esp+18h+arg_8]
0x8D411F: mov     edx, [ecx]
0x8D4121: mov     al, [edi+edx]
0x8D4124: add     esp, 8
0x8D4127: cmp     al, 8
0x8D4129: jz      short loc_8D415A
0x8D412B: mov     eax, [ebx+8]
0x8D412E: mov     ecx, [ebx+4]
0x8D4131: and     eax, 3FFFFFFFh
0x8D4136: cmp     ecx, eax
0x8D4138: jnz     short loc_8D4145
0x8D413A: push    4
0x8D413C: push    ebx
0x8D413D: call    sub_8A6EE0
0x8D4142: add     esp, 8
0x8D4145: mov     ecx, [ebx+4]
0x8D4148: mov     edx, [ebx]
0x8D414A: mov     [edx+ecx*4], ebp
0x8D414D: inc     dword ptr [ebx+4]
0x8D4150: mov     eax, [esp+10h+arg_8]
0x8D4154: mov     ecx, [eax]
0x8D4156: mov     byte ptr [edi+ecx], 8
0x8D415A: movaps  xmm0, xmmword ptr [esi+50h]
0x8D415E: mov     edx, [esp+10h+arg_0]
0x8D4162: mov     eax, [esp+10h+arg_4]
0x8D4166: movaps  xmmword ptr [esi+40h], xmm0
0x8D416A: movaps  xmm0, xmmword ptr [esi+70h]
0x8D416E: movaps  xmmword ptr [esi+60h], xmm0
0x8D4172: mov     [esi+4Ch], edx
0x8D4175: mov     ecx, [eax+1Ch]
0x8D4178: fld     dword ptr [ecx+18h]
0x8D417B: inc     edi
0x8D417C: fsub    [esp+10h+arg_0]
0x8D4180: fdivr   dword ptr ds:0A2F948h
0x8D4186: fstp    dword ptr [esi+5Ch]
0x8D4189: cmp     edi, [eax+38h]
0x8D418C: jl      loc_8D4100
0x8D4192: pop     esi
0x8D4193: pop     ebp
0x8D4194: pop     ebx
0x8D4195: pop     edi
0x8D4196: retn
