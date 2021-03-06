#import <Foundation/Foundation.h>

@interface NSArray (MSFoundation)

/** Returns the first object in the array, or nil if the array is empty. */
- (id)ms_firstObject;

/** Invokes isEqual: on the result of valueForKey: for each of the receiver's items, returning the lowest index with a matching value.
If none of the objects in the receiver contain a matching value, returns NSNotFound. */
- (NSUInteger)ms_indexOfObjectWithValue:(id)value forKey:(NSString *)key;

/** Invokes isEqual: on the result of valueForKey: for each of the receiver's items, returning the first matching value. */
- (id)ms_objectWithValue:(id)value forKey:(NSString *)key;

/** Invokes isEqual: on the result of valueForKey: for each of the receiver's items, returning YES if a matching object is found. */
- (BOOL)ms_containsObjectWithValue:(id)value forKey:(NSString *)key;

@end
