0x801380: push    0FFFFFFFFh; Generic pass allocation helper used by shader vtables: allocates/assigns an inherited pass pointer slot, not frond-specific by itself.
0x801382: push    offset SEH_801380
0x801387: mov     eax, large fs:0
0x80138D: push    eax
0x80138E: push    ecx
0x80138F: push    esi
0x801390: push    edi
0x801391: mov     eax, ds:0B30AACh
0x801396: xor     eax, esp
0x801398: push    eax
0x801399: lea     eax, [esp+1Ch+var_C]
0x80139D: mov     large fs:0, eax
0x8013A3: mov     esi, ecx
0x8013A5: lea     eax, [esp+1Ch+var_10]
0x8013A9: push    eax
0x8013AA: call    NiD3DPassPool_Acquire; Acquire a renderer-owned NiD3DPass from the global pass pool and return it with a reference.
0x8013AF: add     esp, 4
0x8013B2: mov     edi, eax
0x8013B4: mov     ecx, [esi+70h]; this
0x8013B7: cmp     ecx, [edi]
0x8013B9: mov     [esp+1Ch+var_4], 0
0x8013C1: jz      short loc_8013DF
0x8013C3: test    ecx, ecx
0x8013C5: jz      short loc_8013D2
0x8013C7: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x8013CB: jnz     short loc_8013D2
0x8013CD: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x8013D2: mov     eax, [edi]
0x8013D4: test    eax, eax
0x8013D6: mov     [esi+70h], eax
0x8013D9: jz      short loc_8013DF
0x8013DB: add     dword ptr [eax+60h], 1
0x8013DF: mov     eax, [esp+1Ch+var_10]
0x8013E3: test    eax, eax
0x8013E5: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x8013ED: jz      short loc_801402
0x8013EF: add     dword ptr [eax+60h], 0FFFFFFFFh
0x8013F3: mov     ecx, eax; this
0x8013F5: add     eax, 60h ; '`'
0x8013F8: cmp     dword ptr [eax], 0
0x8013FB: jnz     short loc_801402
0x8013FD: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x801402: mov     al, 1
0x801404: mov     ecx, [esp+1Ch+var_C]
0x801408: mov     large fs:0, ecx
0x80140F: pop     ecx
0x801410: pop     edi
0x801411: pop     esi
0x801412: add     esp, 10h
0x801415: retn
0x9D1130: lea     ecx, [ebp-10h]; void *
0x9D1133: jmp     sub_4027D0
0x9D1138: mov     edx, [esp+arg_4]
0x9D113C: lea     eax, [edx-0Ch]
0x9D113F: mov     ecx, [edx-10h]
0x9D1142: xor     ecx, eax
0x9D1144: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D1149: mov     eax, offset stru_AF984C
0x9D114E: jmp     ___CxxFrameHandler3
