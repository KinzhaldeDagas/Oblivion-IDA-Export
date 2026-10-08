0x46ABA0: cmp     [esp+disabled], 0; Verified Oblivion setter: the bool parameter sets or clears TESFormMembr.flags bit 0x800. TESObjectREFR_LinkModifiedForm propagates this bit through ExtraEnableStateParent and the enable-state activation routine clears it. CalcLowPathToPoint independently appends '-Disabled' when this bit is set. Fallout's mangled TESForm::SetDisabled directly writes the same 0x800 mask; this is a cross-check, not the basis of the Oblivion interpretation.
0x46ABA5: jz      short loc_46ABB0
0x46ABA7: or      dword ptr [ecx+8], 800h
0x46ABAE: jmp     short loc_46ABB7
0x46ABB0: and     dword ptr [ecx+8], 0FFFFF7FFh
0x46ABB7: mov     eax, [ecx]
0x46ABB9: mov     edx, [eax+40h]
0x46ABBC: mov     dword ptr [esp+disabled], 40000001h
0x46ABC4: jmp     edx
