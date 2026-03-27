0x60E120: push    0FFFFFFFFh
0x60E122: push    offset SEH_8C8970
0x60E127: mov     eax, large fs:0
0x60E12D: push    eax
0x60E12E: push    ecx
0x60E12F: push    esi
0x60E130: push    edi
0x60E131: mov     eax, ds:0B30AACh
0x60E136: xor     eax, esp
0x60E138: push    eax
0x60E139: lea     eax, [esp+1Ch+var_C]
0x60E13D: mov     large fs:0, eax
0x60E143: mov     edi, ecx
0x60E145: push    44h ; 'D'; Size
0x60E147: call    FormHeapAlloc
0x60E14C: mov     esi, eax
0x60E14E: add     esp, 4
0x60E151: mov     [esp+1Ch+var_10], esi
0x60E155: test    esi, esi
0x60E157: mov     [esp+1Ch+var_4], 0
0x60E15F: jz      short loc_60E17C
0x60E161: mov     ecx, esi; this
0x60E163: call    ??0NiTimeController@@QAE@XZ; NiTimeController::NiTimeController(void)
0x60E168: fldz
0x60E16A: fstp    dword ptr [esi+3Ch]
0x60E16D: mov     dword ptr [esi], offset ??_7BSPlayerDistanceCheckController@@6B@; const BSPlayerDistanceCheckController::`vftable'
0x60E173: mov     dword ptr [esi+40h], 0
0x60E17A: jmp     short loc_60E17E
0x60E17C: xor     esi, esi
0x60E17E: mov     eax, [edi+40h]
0x60E181: mov     ecx, [esp+1Ch+arg_0]
0x60E185: push    ecx
0x60E186: mov     [esi+40h], eax
0x60E189: fld     dword ptr [edi+3Ch]
0x60E18C: push    esi
0x60E18D: fstp    dword ptr [esi+3Ch]
0x60E190: mov     ecx, edi
0x60E192: mov     [esp+24h+var_4], 0FFFFFFFFh
0x60E19A: call    sub_715D80
0x60E19F: mov     eax, esi
0x60E1A1: mov     ecx, [esp+1Ch+var_C]
0x60E1A5: mov     large fs:0, ecx
0x60E1AC: pop     ecx
0x60E1AD: pop     edi
0x60E1AE: pop     esi
0x60E1AF: add     esp, 10h
0x60E1B2: retn    4
