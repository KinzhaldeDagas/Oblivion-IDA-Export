0x8A4150: push    0FFFFFFFFh
0x8A4152: push    offset SEH_8A4150
0x8A4157: mov     eax, large fs:0
0x8A415D: push    eax
0x8A415E: sub     esp, 8
0x8A4161: push    esi
0x8A4162: mov     eax, ds:0B30AACh
0x8A4167: xor     eax, esp
0x8A4169: push    eax
0x8A416A: lea     eax, [esp+1Ch+var_C]
0x8A416E: mov     large fs:0, eax
0x8A4174: mov     esi, ecx
0x8A4176: mov     [esp+1Ch+var_14], esi
0x8A417A: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8A417F: mov     dword ptr [esi], offset ??_7bhkWorldObject@@6B@; const bhkWorldObject::`vftable'
0x8A4185: mov     dword ptr [esi+0Ch], 0
0x8A418C: add     dword ptr ds:0BA7D34h, 1
0x8A4193: mov     dword ptr [esi], offset ??_7bhkEntity@@6B@; const bhkEntity::`vftable'
0x8A4199: add     dword ptr ds:0BA7F8Ch, 1
0x8A41A0: push    ecx
0x8A41A1: mov     eax, esp
0x8A41A3: mov     dword ptr [esi], offset ??_7bhkRigidBody@@6B@; const bhkRigidBody::`vftable'
0x8A41A9: lea     ecx, [esi+10h]
0x8A41AC: mov     [esp+20h+var_4], 0
0x8A41B4: mov     [esp+20h+var_10], esp
0x8A41B8: mov     dword ptr [eax], 0
0x8A41BE: call    sub_532DF0
0x8A41C3: mov     dword ptr [esi+18h], 0
0x8A41CA: add     dword ptr ds:0BA7D80h, 1
0x8A41D1: mov     eax, esi
0x8A41D3: mov     ecx, [esp+1Ch+var_C]
0x8A41D7: mov     large fs:0, ecx
0x8A41DE: pop     ecx
0x8A41DF: pop     esi
0x8A41E0: add     esp, 14h
0x8A41E3: retn
