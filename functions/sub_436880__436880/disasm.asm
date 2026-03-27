0x436880: push    0FFFFFFFFh
0x436882: push    offset SEH_436880
0x436887: mov     eax, large fs:0
0x43688D: push    eax
0x43688E: sub     esp, 124h
0x436894: mov     eax, ___security_cookie
0x436899: xor     eax, esp
0x43689B: mov     [esp+130h+var_10], eax
0x4368A2: push    ebx
0x4368A3: push    ebp
0x4368A4: push    esi
0x4368A5: push    edi
0x4368A6: mov     eax, ___security_cookie
0x4368AB: xor     eax, esp
0x4368AD: push    eax
0x4368AE: lea     eax, [esp+144h+var_C]
0x4368B5: mov     large fs:0, eax
0x4368BB: mov     esi, [esp+144h+arg_0]
0x4368C2: mov     edi, [esp+144h+arg_4]
0x4368C9: mov     ebp, ecx
0x4368CB: mov     eax, esi
0x4368CD: mov     [esp+144h+var_12C], ebp
0x4368D1: mov     dword ptr [esp+144h+ArgList], esi
0x4368D5: mov     [esp+144h+var_11C], edi
0x4368D9: mov     dword ptr [ebp+4], 0
0x4368E0: lea     edx, [eax+1]
0x4368E3: mov     cl, [eax]
0x4368E5: add     eax, 1
0x4368E8: test    cl, cl
0x4368EA: jnz     short loc_4368E3
0x4368EC: sub     eax, edx
0x4368EE: add     eax, 1
0x4368F1: push    eax; Size
0x4368F2: call    FormHeapAlloc
0x4368F7: add     esp, 4
0x4368FA: mov     [ebp+0], eax
0x4368FD: mov     ecx, esi
0x4368FF: mov     edx, eax
0x436901: mov     al, [ecx]
0x436903: mov     [edx], al
0x436905: add     ecx, 1
0x436908: add     edx, 1
0x43690B: test    al, al
0x43690D: jnz     short loc_436901
0x43690F: cmp     dword ptr [edi+210h], 0
0x436916: jnz     short loc_436954
0x436918: push    esi
0x436919: lea     eax, [edi+384h]
0x43691F: push    eax; ArgList
0x436920: push    offset aModelLoadError; "Model Load Error: %s in %s.\r\nWill use"...
0x436925: call    PrintError
0x43692A: add     esp, 0Ch
0x43692D: mov     ecx, edi
0x43692F: call    sub_6F9E60
0x436934: mov     edx, [edi]
0x436936: mov     eax, [edx+54h]
0x436939: push    0
0x43693B: push    offset aMeshesMarker_e; "Meshes\\Marker_Error.NIF"
0x436940: mov     ecx, edi
0x436942: call    eax
0x436944: test    al, al
0x436946: jnz     short loc_436954
0x436948: mov     dword ptr [ebp+0], 0
0x43694F: jmp     loc_436C84
0x436954: mov     ecx, [edi+208h]
0x43695A: mov     esi, [ecx]
0x43695C: xor     bl, bl
0x43695E: test    esi, esi
0x436960: jz      loc_436A03
0x436966: mov     edx, [esi]
0x436968: mov     eax, [edx+8]
0x43696B: mov     ecx, esi
0x43696D: call    eax
0x43696F: test    eax, eax
0x436971: jz      loc_436A03
0x436977: mov     eax, [esi+8]
0x43697A: test    eax, eax
0x43697C: jz      short loc_4369F5
0x43697E: push    offset aBip0909; "Bip[0-9][0-9]"
0x436983: push    eax; FullPath
0x436984: call    sub_6FA6F0
0x436989: add     esp, 8
0x43698C: test    al, al
0x43698E: jz      short loc_4369F5
0x436990: push    0DCh ; 'Ü'; Size
0x436995: call    FormHeapAlloc
0x43699A: add     esp, 4
0x43699D: mov     [esp+144h+var_128], eax
0x4369A1: test    eax, eax
0x4369A3: mov     [esp+144h+var_4], 0
0x4369AE: jz      short loc_4369BB
0x4369B0: push    0
0x4369B2: mov     ecx, eax; this
0x4369B4: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x4369B9: jmp     short loc_4369BD
0x4369BB: xor     eax, eax
0x4369BD: lea     edi, [ebp+8]
0x4369C0: push    eax; a2
0x4369C1: mov     ecx, edi; this
0x4369C3: mov     [esp+148h+var_4], 0FFFFFFFFh
0x4369CE: call    NiSmartPointer_Set??
0x4369D3: mov     ecx, [edi]
0x4369D5: mov     edx, [ecx]
0x4369D7: mov     edx, [edx+90h]
0x4369DD: push    esi
0x4369DE: push    0
0x4369E0: lea     eax, [esp+14Ch+var_124]
0x4369E4: push    eax
0x4369E5: call    edx
0x4369E7: lea     ecx, [esp+144h+var_124]; this
0x4369EB: call    sub_7016A0
0x4369F0: jmp     loc_436AFE
0x4369F5: push    esi; a2
0x4369F6: lea     ecx, [ebp+8]; this
0x4369F9: call    NiSmartPointer_Set??
0x4369FE: jmp     loc_436B02
0x436A03: xor     esi, esi
0x436A05: xor     ebp, ebp
0x436A07: cmp     [edi+210h], esi
0x436A0D: mov     [esp+144h+var_124], esi
0x436A11: jbe     loc_436C84
0x436A17: jmp     short loc_436A22
0x436A19: align 10h
0x436A20: mov     edi, eax
0x436A22: mov     eax, [edi+208h]
0x436A28: mov     edi, [eax+esi*4]
0x436A2B: test    edi, edi
0x436A2D: jz      loc_436ADF
0x436A33: mov     edx, [edi]
0x436A35: mov     eax, [edx+8]
0x436A38: mov     ecx, edi
0x436A3A: call    eax
0x436A3C: test    eax, eax
0x436A3E: jnz     short loc_436A51
0x436A40: mov     edx, [edi]
0x436A42: mov     eax, [edx+0Ch]
0x436A45: mov     ecx, edi
0x436A47: call    eax
0x436A49: test    eax, eax
0x436A4B: jz      loc_436ADF
0x436A51: mov     esi, [esp+144h+var_12C]
0x436A55: add     esi, 8
0x436A58: cmp     dword ptr [esi], 0
0x436A5B: jnz     short loc_436A9D
0x436A5D: push    0DCh ; 'Ü'; Size
0x436A62: call    FormHeapAlloc
0x436A67: add     esp, 4
0x436A6A: mov     [esp+144h+var_118], eax
0x436A6E: test    eax, eax
0x436A70: mov     [esp+144h+var_4], 1
0x436A7B: jz      short loc_436A88
0x436A7D: push    0
0x436A7F: mov     ecx, eax; this
0x436A81: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x436A86: jmp     short loc_436A8A
0x436A88: xor     eax, eax
0x436A8A: push    eax; a2
0x436A8B: mov     ecx, esi; this
0x436A8D: mov     [esp+148h+var_4], 0FFFFFFFFh
0x436A98: call    NiSmartPointer_Set??
0x436A9D: mov     ecx, [esi]
0x436A9F: mov     edx, [ecx]
0x436AA1: mov     edx, [edx+90h]
0x436AA7: push    edi
0x436AA8: push    ebp
0x436AA9: lea     eax, [esp+14Ch+var_128]
0x436AAD: push    eax
0x436AAE: call    edx
0x436AB0: mov     eax, [esp+144h+var_128]
0x436AB4: add     ebp, 1
0x436AB7: test    eax, eax
0x436AB9: jz      short loc_436AD9
0x436ABB: mov     esi, eax
0x436ABD: add     eax, 4
0x436AC0: push    eax; lpAddend
0x436AC1: call    ds:InterlockedDecrement
0x436AC7: test    eax, eax
0x436AC9: jnz     short loc_436AD9
0x436ACB: test    esi, esi
0x436ACD: jz      short loc_436AD9
0x436ACF: mov     eax, [esi]
0x436AD1: mov     edx, [eax]
0x436AD3: push    1
0x436AD5: mov     ecx, esi
0x436AD7: call    edx
0x436AD9: mov     esi, [esp+144h+var_124]
0x436ADD: mov     bl, 1
0x436ADF: mov     eax, [esp+144h+var_11C]
0x436AE3: add     esi, 1
0x436AE6: cmp     esi, [eax+210h]
0x436AEC: mov     [esp+144h+var_124], esi
0x436AF0: jb      loc_436A20
0x436AF6: test    bl, bl
0x436AF8: jz      loc_436C84
0x436AFE: mov     ebp, [esp+144h+var_12C]
0x436B02: mov     ecx, [ebp+8]
0x436B05: push    ecx
0x436B06: call    sub_4809A0
0x436B0B: mov     ax, ds:word_A36A48
0x436B11: mov     edx, ds:dword_A36A44
0x436B17: mov     [esp+148h+var_110], ax
0x436B1C: mov     eax, dword ptr [esp+148h+ArgList]
0x436B20: add     esp, 4
0x436B23: mov     dword ptr [esp+144h+Src], edx
0x436B27: mov     esi, eax
0x436B29: lea     esp, [esp+0]
0x436B30: mov     cl, [eax]
0x436B32: add     eax, 1
0x436B35: test    cl, cl
0x436B37: jnz     short loc_436B30
0x436B39: lea     edi, [esp+144h+Src]
0x436B3D: sub     eax, esi
0x436B3F: add     edi, 0FFFFFFFFh
0x436B42: mov     cl, [edi+1]
0x436B45: add     edi, 1
0x436B48: test    cl, cl
0x436B4A: jnz     short loc_436B42
0x436B4C: mov     ecx, eax
0x436B4E: shr     ecx, 2
0x436B51: rep movsd
0x436B53: mov     ecx, eax
0x436B55: and     ecx, 3
0x436B58: rep movsb
0x436B5A: mov     edi, [esp+144h+var_12C]
0x436B5E: lea     ecx, [esp+144h+Src]
0x436B62: push    ecx; Src
0x436B63: mov     ecx, [edi+8]
0x436B66: call    NiObjectNET_SetName
0x436B6B: mov     dl, bDisableWarning_MESSAGES
0x436B71: mov     bDisableWarning_MESSAGES, 1
0x436B78: mov     ecx, [edi+8]
0x436B7B: push    9
0x436B7D: mov     byte ptr [esp+148h+var_130+3], dl
0x436B81: xor     bl, bl
0x436B83: call    NiNode_GetNiPropertyByID
0x436B88: test    eax, eax
0x436B8A: jz      short loc_436BD3
0x436B8C: mov     ax, [eax+18h]
0x436B90: mov     ecx, dword_B3F998
0x436B96: cmp     ax, [ecx+18h]
0x436B9A: jnz     short loc_436BD3
0x436B9C: mov     ecx, [edi+8]
0x436B9F: push    9
0x436BA1: lea     edx, [esp+148h+var_128]
0x436BA5: push    edx
0x436BA6: call    sub_708560
0x436BAB: mov     eax, [esp+144h+var_128]
0x436BAF: test    eax, eax
0x436BB1: jz      short loc_436BD1
0x436BB3: mov     esi, eax
0x436BB5: add     eax, 4
0x436BB8: push    eax; lpAddend
0x436BB9: call    ds:InterlockedDecrement
0x436BBF: test    eax, eax
0x436BC1: jnz     short loc_436BD1
0x436BC3: test    esi, esi
0x436BC5: jz      short loc_436BD1
0x436BC7: mov     eax, [esi]
0x436BC9: mov     edx, [eax]
0x436BCB: push    1
0x436BCD: mov     ecx, esi
0x436BCF: call    edx
0x436BD1: mov     bl, 1
0x436BD3: mov     ecx, [edi+8]
0x436BD6: push    7
0x436BD8: call    NiNode_GetNiPropertyByID
0x436BDD: test    eax, eax
0x436BDF: jz      short loc_436C28
0x436BE1: mov     ax, [eax+18h]
0x436BE5: mov     ecx, dword_B3F980
0x436BEB: cmp     ax, [ecx+18h]
0x436BEF: jnz     short loc_436C28
0x436BF1: mov     ecx, [edi+8]
0x436BF4: push    7
0x436BF6: lea     edx, [esp+148h+var_12C]
0x436BFA: push    edx
0x436BFB: call    sub_708560
0x436C00: mov     eax, [esp+144h+var_12C]
0x436C04: test    eax, eax
0x436C06: jz      short loc_436C2C
0x436C08: mov     esi, eax
0x436C0A: add     eax, 4
0x436C0D: push    eax; lpAddend
0x436C0E: call    ds:InterlockedDecrement
0x436C14: test    eax, eax
0x436C16: jnz     short loc_436C2C
0x436C18: test    esi, esi
0x436C1A: jz      short loc_436C2C
0x436C1C: mov     eax, [esi]
0x436C1E: mov     edx, [eax]
0x436C20: push    1
0x436C22: mov     ecx, esi
0x436C24: call    edx
0x436C26: jmp     short loc_436C2C
0x436C28: test    bl, bl
0x436C2A: jz      short loc_436C5F
0x436C2C: mov     eax, [esp+144h+var_11C]
0x436C30: add     eax, 8
0x436C33: cmp     byte ptr [eax], 0
0x436C36: jz      short loc_436C4D
0x436C38: mov     ecx, dword ptr [esp+144h+ArgList]
0x436C3C: push    ecx
0x436C3D: push    eax; ArgList
0x436C3E: push    offset aSReexportSToGe; "%s: Reexport '%s' to get rid of the ZBu"...
0x436C43: call    PrintError
0x436C48: add     esp, 0Ch
0x436C4B: jmp     short loc_436C5F
0x436C4D: mov     edx, dword ptr [esp+144h+ArgList]
0x436C51: push    edx; ArgList
0x436C52: push    offset aReexportSToGet; "Reexport '%s' to get rid of the ZBuffer"...
0x436C57: call    PrintError
0x436C5C: add     esp, 8
0x436C5F: cmp     [esp+144h+arg_8], 0
0x436C67: mov     al, byte ptr [esp+144h+var_130+3]
0x436C6B: mov     bDisableWarning_MESSAGES, al
0x436C70: jz      short loc_436C84
0x436C72: mov     ecx, [edi+8]
0x436C75: push    1
0x436C77: push    0
0x436C79: push    1
0x436C7B: push    ecx
0x436C7C: call    sub_7B8940
0x436C81: add     esp, 10h
0x436C84: mov     ecx, dword ptr [esp+144h+var_C]
0x436C8B: mov     large fs:0, ecx
0x436C92: pop     ecx
0x436C93: pop     edi
0x436C94: pop     esi
0x436C95: pop     ebp
0x436C96: pop     ebx
0x436C97: mov     ecx, [esp+130h+var_10]
0x436C9E: xor     ecx, esp
0x436CA0: call    @__security_check_cookie@4; __security_check_cookie(x)
0x436CA5: add     esp, 130h
0x436CAB: retn    0Ch
