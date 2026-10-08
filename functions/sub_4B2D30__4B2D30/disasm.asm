0x4B2D30: push    0FFFFFFFFh; [constructor audit] Initializes NiTArray<NiPointer<NiAVObject>>. Capacity0 branch at4B2DD6 writes data=NULL and makes no allocation. Nonzero capacity allocates4+capacity*4 with a count cookie and constructs NiPointer elements; NULL heap result yields data=NULL. Frond group constructor70B780 uses capacity0, so the nonzero allocation branch is not part of that plugin creation path.
0x4B2D32: push    offset SEH_8094D0
0x4B2D37: mov     eax, large fs:0
0x4B2D3D: push    eax
0x4B2D3E: push    ebx
0x4B2D3F: push    ebp
0x4B2D40: push    esi
0x4B2D41: push    edi
0x4B2D42: mov     eax, ds:0B30AACh
0x4B2D47: xor     eax, esp
0x4B2D49: push    eax
0x4B2D4A: lea     eax, [esp+20h+var_C]
0x4B2D4E: mov     large fs:0, eax
0x4B2D54: mov     edi, ecx
0x4B2D56: mov     eax, dword ptr [esp+20h+capacity]
0x4B2D5A: mov     cx, [esp+20h+grow]
0x4B2D5F: xor     ebp, ebp
0x4B2D61: cmp     ax, bp
0x4B2D64: mov     dword ptr [edi], offset ??_7?$NiTArray@V?$NiPointer@VNiAVObject@@@@@@6B@; const NiTArray<NiPointer<NiAVObject>>::`vftable'
0x4B2D6A: mov     [edi+8], ax
0x4B2D6E: mov     [edi+0Eh], cx
0x4B2D72: mov     [edi+0Ah], bp
0x4B2D76: mov     [edi+0Ch], bp
0x4B2D7A: jbe     short loc_4B2DD6
0x4B2D7C: movzx   esi, ax
0x4B2D7F: xor     ecx, ecx
0x4B2D81: mov     eax, esi
0x4B2D83: mov     edx, 4
0x4B2D88: mul     edx
0x4B2D8A: seto    cl
0x4B2D8D: neg     ecx
0x4B2D8F: or      ecx, eax
0x4B2D91: xor     eax, eax
0x4B2D93: add     ecx, 4
0x4B2D96: setb    al
0x4B2D99: neg     eax
0x4B2D9B: or      eax, ecx
0x4B2D9D: push    eax; Size
0x4B2D9E: call    FormHeapAlloc
0x4B2DA3: add     esp, 4
0x4B2DA6: mov     dword ptr [esp+20h+capacity], eax
0x4B2DAA: cmp     eax, ebp
0x4B2DAC: mov     [esp+20h+var_4], ebp
0x4B2DB0: jz      short loc_4B2DCF
0x4B2DB2: push    offset NiPointerSlot_Release; a5
0x4B2DB7: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x4B2DBC: push    esi; size
0x4B2DBD: lea     ebx, [eax+4]
0x4B2DC0: push    4; a2
0x4B2DC2: push    ebx; a1
0x4B2DC3: mov     [eax], esi
0x4B2DC5: call    ArrayConstructor
0x4B2DCA: mov     [edi+4], ebx
0x4B2DCD: jmp     short loc_4B2DD9
0x4B2DCF: xor     ebx, ebx
0x4B2DD1: mov     [edi+4], ebx
0x4B2DD4: jmp     short loc_4B2DD9
0x4B2DD6: mov     [edi+4], ebp
0x4B2DD9: mov     eax, edi
0x4B2DDB: mov     ecx, [esp+20h+var_C]
0x4B2DDF: mov     large fs:0, ecx
0x4B2DE6: pop     ecx
0x4B2DE7: pop     edi
0x4B2DE8: pop     esi
0x4B2DE9: pop     ebp
0x4B2DEA: pop     ebx
0x4B2DEB: add     esp, 0Ch
0x4B2DEE: retn    8
0x9C6200: mov     eax, [ebp+4]
0x9C6203: push    eax
0x9C6204: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C6209: pop     ecx
0x9C620A: retn
0x9C620B: mov     edx, [esp+arg_4]
0x9C620F: lea     eax, [edx-10h]
0x9C6212: mov     ecx, [edx-14h]
0x9C6215: xor     ecx, eax
0x9C6217: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C621C: mov     eax, offset stru_AEE7E8
0x9C6221: jmp     ___CxxFrameHandler3
