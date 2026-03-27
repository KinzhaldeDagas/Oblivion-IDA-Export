0x45C870: sub     esp, 0Ch
0x45C873: push    ebp
0x45C874: push    esi
0x45C875: mov     esi, ecx
0x45C877: mov     ecx, ds:0B33A98h
0x45C87D: call    sub_446B10
0x45C882: cmp     dword ptr [esi+40h], 0
0x45C886: mov     ebp, [esp+14h+arg_0]
0x45C88A: mov     [esp+14h+var_A], al
0x45C88E: mov     [esp+14h+var_8], 0
0x45C896: jz      short loc_45C8AA
0x45C898: mov     eax, [ebp+30h]
0x45C89B: cmp     eax, 0FFFFFFFFh
0x45C89E: jnz     short loc_45C8A6
0x45C8A0: mov     eax, [ebp+148h]
0x45C8A6: mov     [esp+14h+var_8], eax
0x45C8AA: mov     ecx, [esi+18h]
0x45C8AD: push    ebx
0x45C8AE: shr     ecx, 9
0x45C8B1: mov     ebx, 1
0x45C8B6: test    bl, cl
0x45C8B8: jz      short loc_45C8C2
0x45C8BA: add     [esi+90h], ebx
0x45C8C0: jmp     short loc_45C8DB
0x45C8C2: mov     ecx, [ebp+8]
0x45C8C5: push    ebx
0x45C8C6: lea     edx, [esp+1Ch+arg_0]
0x45C8CA: push    edx
0x45C8CB: push    ebx
0x45C8CC: lea     eax, [esp+24h+var_A]
0x45C8D0: push    eax
0x45C8D1: push    ebp
0x45C8D2: mov     [esp+2Ch+arg_0], ebx
0x45C8D6: call    ecx
0x45C8D8: add     esp, 14h
0x45C8DB: cmp     [esp+18h+var_A], 0
0x45C8E0: mov     byte ptr [esp+18h+arg_0], 0
0x45C8E5: jbe     loc_45C98B
0x45C8EB: push    edi
0x45C8EC: lea     esp, [esp+0]
0x45C8F0: movzx   edx, byte ptr [esp+1Ch+arg_0]
0x45C8F5: mov     ecx, ds:0B33A98h
0x45C8FB: push    edx
0x45C8FC: call    sub_446B20
0x45C901: mov     edi, eax
0x45C903: add     edi, 1Ch
0x45C906: mov     eax, edi
0x45C908: lea     edx, [eax+1]
0x45C90B: jmp     short loc_45C910
0x45C90D: align 10h
0x45C910: mov     cl, [eax]
0x45C912: add     eax, 1
0x45C915: test    cl, cl
0x45C917: jnz     short loc_45C910
0x45C919: sub     eax, edx
0x45C91B: mov     [esp+1Ch+var_9], al
0x45C91F: mov     eax, [esi+18h]
0x45C922: shr     eax, 9
0x45C925: test    bl, al
0x45C927: jz      short loc_45C931
0x45C929: add     [esi+90h], ebx
0x45C92F: jmp     short loc_45C94A
0x45C931: mov     eax, [ebp+8]
0x45C934: push    ebx
0x45C935: lea     ecx, [esp+20h+var_4]
0x45C939: push    ecx
0x45C93A: push    ebx
0x45C93B: lea     edx, [esp+28h+var_9]
0x45C93F: push    edx
0x45C940: push    ebp
0x45C941: mov     [esp+30h+var_4], ebx
0x45C945: call    eax
0x45C947: add     esp, 14h
0x45C94A: mov     ecx, [esi+18h]
0x45C94D: movzx   eax, [esp+1Ch+var_9]
0x45C952: shr     ecx, 9
0x45C955: test    bl, cl
0x45C957: jz      short loc_45C961
0x45C959: add     [esi+90h], eax
0x45C95F: jmp     short loc_45C976
0x45C961: push    ebx
0x45C962: lea     edx, [esp+20h+var_4]
0x45C966: push    edx
0x45C967: push    eax
0x45C968: mov     eax, [ebp+8]
0x45C96B: push    edi
0x45C96C: push    ebp
0x45C96D: mov     [esp+30h+var_4], ebx
0x45C971: call    eax
0x45C973: add     esp, 14h
0x45C976: mov     al, byte ptr [esp+1Ch+arg_0]
0x45C97A: add     al, bl
0x45C97C: cmp     al, [esp+1Ch+var_A]
0x45C980: mov     byte ptr [esp+1Ch+arg_0], al
0x45C984: jb      loc_45C8F0
0x45C98A: pop     edi
0x45C98B: mov     ecx, [esi+40h]
0x45C98E: test    ecx, ecx
0x45C990: pop     ebx
0x45C991: jz      short loc_45C9B0
0x45C993: mov     eax, [ebp+30h]
0x45C996: cmp     eax, 0FFFFFFFFh
0x45C999: jnz     short loc_45C9A1
0x45C99B: mov     eax, [ebp+148h]
0x45C9A1: sub     eax, [esp+14h+var_8]
0x45C9A5: push    offset aPluginList; "Plugin List"
0x45C9AA: push    eax
0x45C9AB: call    sub_4531B0
0x45C9B0: pop     esi
0x45C9B1: pop     ebp
0x45C9B2: add     esp, 0Ch
0x45C9B5: retn    4
