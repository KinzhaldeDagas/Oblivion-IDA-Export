0x494F90: push    0FFFFFFFFh
0x494F92: push    offset SEH_494F90
0x494F97: mov     eax, large fs:0
0x494F9D: push    eax
0x494F9E: sub     esp, 590h
0x494FA4: mov     eax, ds:0B30AACh
0x494FA9: xor     eax, esp
0x494FAB: mov     [esp+59Ch+var_10], eax
0x494FB2: push    esi
0x494FB3: push    edi
0x494FB4: mov     eax, ds:0B30AACh
0x494FB9: xor     eax, esp
0x494FBB: push    eax
0x494FBC: lea     eax, [esp+5A8h+var_C]
0x494FC3: mov     large fs:0, eax
0x494FC9: mov     eax, [esp+5A8h+arg_4]
0x494FD0: mov     esi, [esp+5A8h+arg_0]
0x494FD7: xor     edi, edi
0x494FD9: sub     eax, edi
0x494FDB: jz      short loc_494FFC
0x494FDD: sub     eax, 1
0x494FE0: jz      short loc_494FFC
0x494FE2: sub     eax, 2
0x494FE5: jnz     short loc_495001
0x494FE7: test    esi, esi
0x494FE9: jz      short loc_495001
0x494FEB: mov     eax, [esp+5A8h+arg_8]
0x494FF2: cmp     eax, 70h ; 'p'
0x494FF5: jnz     short loc_495029
0x494FF7: or      word ptr [esi+18h], 1
0x494FFC: mov     edi, 1
0x495001: mov     eax, edi
0x495003: mov     ecx, [esp+5A8h+var_C]
0x49500A: mov     large fs:0, ecx
0x495011: pop     ecx
0x495012: pop     edi
0x495013: pop     esi
0x495014: mov     ecx, [esp+59Ch+var_10]
0x49501B: xor     ecx, esp
0x49501D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x495022: add     esp, 59Ch
0x495028: retn
0x495029: cmp     eax, 71h ; 'q'
0x49502C: jnz     short loc_495036
0x49502E: and     word ptr [esi+18h], 0FFFEh
0x495034: jmp     short loc_494FFC
0x495036: cmp     eax, 72h ; 'r'
0x495039: jnz     short loc_49505A
0x49503B: mov     ecx, esi; this
0x49503D: call    NiAVObject_InitializePropertyState
0x495042: mov     ecx, esi
0x495044: call    NiNode_UpdateDynamicEffectState
0x495049: fldz
0x49504B: push    0; a3
0x49504D: push    ecx
0x49504E: mov     ecx, esi; this
0x495050: fstp    [esp+5B0h+a2]; a2
0x495053: call    NiAVObject_UpdateNiAVObject
0x495058: jmp     short loc_494FFC
0x49505A: cmp     eax, 7Ah ; 'z'
0x49505D: jnz     short loc_495001
0x49505F: lea     ecx, [esp+5A8h+var_59C]; this
0x495063: call    ??0NiStream@@QAE@XZ; NiStream::NiStream(void)
0x495068: push    esi
0x495069: lea     ecx, [esp+5ACh+var_59C]
0x49506D: mov     [esp+5ACh+var_4], 0
0x495078: call    sub_713E50
0x49507D: mov     eax, [esi+8]
0x495080: test    eax, eax
0x495082: jnz     short loc_495089
0x495084: mov     eax, offset aNullobject; "NullObject"
0x495089: mov     dword ptr [esp+5A8h+Src], (offset loc_5C3A62+1)
0x495094: mov     edx, eax
0x495096: mov     cl, [eax]
0x495098: add     eax, 1
0x49509B: test    cl, cl
0x49509D: jnz     short loc_495096
0x49509F: lea     edi, [esp+5A8h+Src]
0x4950A6: sub     eax, edx
0x4950A8: add     edi, 0FFFFFFFFh
0x4950AB: jmp     short loc_4950B0
0x4950AD: align 10h
0x4950B0: mov     cl, [edi+1]
0x4950B3: add     edi, 1
0x4950B6: test    cl, cl
0x4950B8: jnz     short loc_4950B0
0x4950BA: mov     ecx, eax
0x4950BC: shr     ecx, 2
0x4950BF: mov     esi, edx
0x4950C1: rep movsd
0x4950C3: mov     ecx, eax
0x4950C5: and     ecx, 3
0x4950C8: lea     eax, [esp+5A8h+Src]
0x4950CF: rep movsb
0x4950D1: add     eax, 0FFFFFFFFh
0x4950D4: mov     cl, [eax+1]
0x4950D7: add     eax, 1
0x4950DA: test    cl, cl
0x4950DC: jnz     short loc_4950D4
0x4950DE: mov     ecx, ds:0A3DBA8h
0x4950E4: mov     dl, ds:0A3DBACh
0x4950EA: mov     [eax], ecx
0x4950EC: mov     [eax+4], dl
0x4950EF: lea     eax, [esp+5A8h+Src]
0x4950F6: push    eax; Src
0x4950F7: lea     ecx, [esp+5ACh+var_59C]
0x4950FB: call    sub_712140
0x495100: lea     ecx, [esp+5A8h+var_59C]; this
0x495104: mov     edi, 1
0x495109: mov     [esp+5A8h+var_4], 0FFFFFFFFh
0x495114: call    ??1NiStream@@UAE@XZ; NiStream::~NiStream(void)
0x495119: jmp     loc_495001
