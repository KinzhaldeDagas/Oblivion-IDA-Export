struct AVCollection
{
AVCollectionListNode list;
AVCollectionEntry *magicka; ///< Verified ID9: ctor writes key9; name API table cell B1277C -> setting B3A07C; initializer 9F9780 registers Magicka/sDerivedAttributeNameMagicka.
AVCollectionEntry *fatigue; ///< Verified ID10: ctor writes key10; name table cell B12780 -> setting B3A084; initializer 9F97A0 registers Fatigue/sDerivedAttributeNameFatigue.
AVCollectionIndex *indexedEntries;
};
