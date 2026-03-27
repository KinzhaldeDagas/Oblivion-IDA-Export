0x8012E0: push    0FFFFFFFFh
0x8012E2: push    offset ??0BSShader@@QAE@XZ_SEH
0x8012E7: mov     eax, large fs:0
0x8012ED: push    eax
0x8012EE: push    ecx
0x8012EF: push    esi
0x8012F0: push    edi
0x8012F1: mov     eax, ds:0B30AACh
0x8012F6: xor     eax, esp
0x8012F8: push    eax
0x8012F9: lea     eax, [esp+1Ch+var_C]
0x8012FD: mov     large fs:0, eax
0x801303: mov     esi, ecx
0x801305: mov     [esp+1Ch+var_10], esi
0x801309: mov     dword ptr [esi], offset ??_7BSShader@@6B@; const BSShader::`vftable'
0x80130F: mov     ecx, [esi+70h]
0x801312: test    ecx, ecx
0x801314: lea     edi, [esi+70h]
0x801317: mov     [esp+1Ch+var_4], 1
0x80131F: jz      short loc_801332
0x801321: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x801325: jnz     short loc_80132C
0x801327: call    sub_7604D0
0x80132C: mov     dword ptr [edi], 0
0x801332: mov     ecx, ds:0B43104h
0x801338: push    esi
0x801339: call    sub_76B350
0x80133E: push    offset sub_4027D0; void (__thiscall *)(void *)
0x801343: push    1; int
0x801345: push    4; unsigned int
0x801347: push    edi; void *
0x801348: mov     byte ptr [esp+2Ch+var_4], 0
0x80134D: call    $LN21
0x801352: mov     ecx, esi
0x801354: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x80135C: call    sub_76C760
0x801361: mov     ecx, [esp+1Ch+var_C]
0x801365: mov     large fs:0, ecx
0x80136C: pop     ecx
0x80136D: pop     edi
0x80136E: pop     esi
0x80136F: add     esp, 10h
0x801372: retn
