0x741A50: push    0FFFFFFFFh
0x741A52: push    offset SEH_741A50
0x741A57: mov     eax, large fs:0
0x741A5D: push    eax
0x741A5E: push    ecx
0x741A5F: push    esi
0x741A60: mov     eax, ds:0B30AACh
0x741A65: xor     eax, esp
0x741A67: push    eax
0x741A68: lea     eax, [esp+18h+var_C]
0x741A6C: mov     large fs:0, eax
0x741A72: mov     esi, ecx
0x741A74: mov     [esp+18h+var_10], esi
0x741A78: push    0
0x741A7A: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x741A7F: lea     ecx, [esi+0DCh]; this
0x741A85: mov     [esp+18h+var_4], 0
0x741A8D: mov     dword ptr [esi], offset ??_7NiBSPNode@@6B@; const NiBSPNode::`vftable'
0x741A93: call    sub_716DB0
0x741A98: lea     ecx, [esi+0ECh]; this
0x741A9E: call    sub_716DB0
0x741AA3: push    2; capacity
0x741AA5: lea     ecx, [esi+0ACh]; self
0x741AAB: call    NiTObjectArray_Resize16
0x741AB0: mov     word ptr [esi+0BAh], 0
0x741AB9: mov     eax, esi
0x741ABB: mov     ecx, [esp+18h+var_C]
0x741ABF: mov     large fs:0, ecx
0x741AC6: pop     ecx
0x741AC7: pop     esi
0x741AC8: add     esp, 10h
0x741ACB: retn
0x9CAE80: mov     ecx, [ebp-10h]; this
0x9CAE83: jmp     ??1NiBSPNode@@UAE@XZ; NiBSPNode::~NiBSPNode(void)
0x9CAE88: mov     edx, [esp+arg_4]
0x9CAE8C: lea     eax, [edx-8]
0x9CAE8F: mov     ecx, [edx-0Ch]
0x9CAE92: xor     ecx, eax
0x9CAE94: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CAE99: mov     eax, offset stru_AF349C
0x9CAE9E: jmp     ___CxxFrameHandler3
