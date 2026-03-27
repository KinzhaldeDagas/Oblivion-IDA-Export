0x6BE880: push    0FFFFFFFFh
0x6BE882: push    offset SEH_71BE30
0x6BE887: mov     eax, large fs:0
0x6BE88D: push    eax
0x6BE88E: push    ecx
0x6BE88F: push    ebx
0x6BE890: push    esi
0x6BE891: push    edi
0x6BE892: mov     eax, ds:0B30AACh
0x6BE897: xor     eax, esp
0x6BE899: push    eax
0x6BE89A: lea     eax, [esp+20h+var_C]
0x6BE89E: mov     large fs:0, eax
0x6BE8A4: mov     ebx, [esp+20h+arg_8]
0x6BE8A8: cmp     dword ptr [ebx], 0
0x6BE8AB: mov     edi, [esp+20h+arg_4]
0x6BE8AF: jnz     short loc_6BE8FC
0x6BE8B1: push    4Ch ; 'L'; Size
0x6BE8B3: call    FormHeapAlloc
0x6BE8B8: add     esp, 4
0x6BE8BB: mov     [esp+20h+arg_8], eax
0x6BE8BF: test    eax, eax
0x6BE8C1: mov     [esp+20h+var_4], 0
0x6BE8C9: jz      short loc_6BE8EA
0x6BE8CB: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; a5
0x6BE8D0: push    offset sub_6BE430; a4
0x6BE8D5: push    1; size
0x6BE8D7: lea     esi, [eax+4]
0x6BE8DA: push    48h ; 'H'; a2
0x6BE8DC: push    esi; a1
0x6BE8DD: mov     dword ptr [eax], 1
0x6BE8E3: call    ArrayConstructor
0x6BE8E8: jmp     short loc_6BE8EC
0x6BE8EA: xor     esi, esi
0x6BE8EC: mov     [edi], esi
0x6BE8EE: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6BE8F6: mov     dword ptr [ebx], 1
0x6BE8FC: mov     edi, [edi]
0x6BE8FE: mov     byte ptr [esp+20h+arg_8], 0
0x6BE903: xor     ebx, ebx
0x6BE905: movzx   esi, bl
0x6BE908: mov     eax, [edi+esi*4+30h]
0x6BE90C: mov     [esp+20h+var_10], eax
0x6BE910: mov     eax, [edi+esi*4+14h]
0x6BE914: test    eax, eax
0x6BE916: mov     [esp+20h+arg_4], eax
0x6BE91A: jz      short loc_6BE95F
0x6BE91C: mov     ecx, [edi+esi*4+20h]
0x6BE920: fld     [esp+20h+arg_0]
0x6BE924: mov     eax, ds:0B3D1A8h[ecx*4]
0x6BE92B: lea     edx, [esp+20h+arg_4]
0x6BE92F: push    edx
0x6BE930: lea     ecx, [esp+24h+var_10]
0x6BE934: push    ecx
0x6BE935: push    ecx
0x6BE936: fstp    [esp+2Ch+var_2C]
0x6BE939: call    eax ; dword_B3D1A8
0x6BE93B: add     esp, 0Ch
0x6BE93E: test    al, al
0x6BE940: jz      short loc_6BE947
0x6BE942: mov     byte ptr [esp+20h+arg_8], 1
0x6BE947: mov     edx, [esp+20h+arg_4]
0x6BE94B: mov     eax, [esp+20h+var_10]
0x6BE94F: mov     [edi+esi*4+14h], edx
0x6BE953: mov     [edi+esi*4+30h], eax
0x6BE957: mov     dword ptr [edi+esi*4+3Ch], 0
0x6BE95F: add     ebx, 1
0x6BE962: cmp     ebx, 3
0x6BE965: jb      short loc_6BE905
0x6BE967: cmp     byte ptr [esp+20h+arg_8], 0
0x6BE96C: setnz   al
0x6BE96F: mov     ecx, [esp+20h+var_C]
0x6BE973: mov     large fs:0, ecx
0x6BE97A: pop     ecx
0x6BE97B: pop     edi
0x6BE97C: pop     esi
0x6BE97D: pop     ebx
0x6BE97E: add     esp, 10h
0x6BE981: retn
