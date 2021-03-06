/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import "VoiceServices-Structs.h"
#import "VSRecognitionRecognizeAction.h"

@class NSString, NSMutableDictionary;

@interface VSRecognitionDisambiguateAction : VSRecognitionRecognizeAction {
	NSString *_repeatedSpokenFeedbackString;
	NSString *_sequenceTag;
	NSMutableDictionary *_knownValues;
	NSMutableDictionary *_knownPhoneticValues;
	NSMutableDictionary *_ambiguousValues;
	NSMutableDictionary *_ambiguousPhoneticValues;
	void *_context;
}
-(id)_actionForEmptyResults;
-(VSRecognitionRef)_createRecognitionInstanceWithCallbacks:(XXStruct__Vsh7C *)callbacks info:(void *)info;
-(VSRecognitionDisambiguationContextRef)_disambiguationContext;
-(BOOL)_keywordIndexChanged;
-(id)_keywords;
-(id)ambiguousValuesForClassIdentifier:(id)classIdentifier;
-(int)completionType;
-(void)dealloc;
-(id)knownValueForClassIdentifier:(id)classIdentifier;
-(id)knownValuesForClassIdentifier:(id)classIdentifier;
-(id)repeatedSpokenFeedbackString;
-(id)sequenceTag;
-(void)setAmbiguousValues:(id)values phoneticValues:(id)values2 forClassIdentifier:(id)classIdentifier;
-(void)setKeywords:(id)keywords;
-(void)setKnownValue:(id)value phoneticValue:(id)value2 forClassIdentifier:(id)classIdentifier;
-(void)setKnownValues:(id)values phoneticValues:(id)values2 forClassIdentifier:(id)classIdentifier;
-(void)setRepeatedSpokenFeedbackString:(id)string;
-(void)setSequenceTag:(id)tag;
@end

