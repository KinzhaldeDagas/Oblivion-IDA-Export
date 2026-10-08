struct TESActorBaseMembr
{
TESBoundObjectMembr super;
TESActorBaseData actorBaseData;
TESContainer container;
TESSpellList spellList;
TESAIForm aiForm;
TESHealthForm health;
TESAttributes attributes;
TESAnimation animation;
TESFullName fullName;
TESModel model;
TESScriptableForm scriptable;
AVCollection actorValueModifiers; ///< Verified: complete TESActorBase +0xD0; size/save/load dispatched by mask 0x10000000. Layout recovered from 0x65C270/0x65C520/0x65CBB0. AVCollection is an analysis name; original engine class spelling Unknown.
};
